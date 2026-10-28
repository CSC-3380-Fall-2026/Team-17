#ifndef CONTROLS_H
#define CONTROLS_H
#include <godot_cpp/classes/character_body2d.hpp>

namespace godot{

    class Controls : public CharacterBody2D{
        GDCLASS(Controls, CharacterBody2D)

private:
    double speed = 1000.0;

public:
    static void _bind_methods();
    Controls();
    ~Controls();

    void _physics_process(double delta) override;
    };
}

#endif