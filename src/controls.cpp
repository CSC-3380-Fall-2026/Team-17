#include "controls.h"
#include <godot_cpp/classes/input.hpp>
#include <godot_cpp/variant/vector2.hpp>
using namespace godot;

Controls::Controls(){}
Controls::~Controls(){}

void Controls::_bind_methods(){}

// Player input, and physics behind how they move
void Controls::_physics_process(double delta){
    Input *input = Input::get_singleton();

    Vector2 direction;

    // Changing direction based on player input
    if(input->is_key_pressed(Key::KEY_W)){
        direction.y -= 1;
    }
    if(input->is_key_pressed(Key::KEY_S)){
        direction.y += 1;
    }
    if(input->is_key_pressed(Key::KEY_A)){
        direction.x -= 1;
    }
    if(input->is_key_pressed(Key::KEY_D)){
        direction.x += 1;
    }

    // Set the direction, set velocity based on player speed, then move
    direction = direction.normalized();
    set_velocity(direction * speed);
    move_and_slide();
}