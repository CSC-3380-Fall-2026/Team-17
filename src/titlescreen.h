#ifndef TITLESCREEN_H
#define TITLESCREEN_H
#include <godot_cpp/classes/control.hpp>

namespace godot{

    class Titlescreen : public Control{
        GDCLASS(Titlescreen, Control)

private:
    void play();
    void options();
    void exitGame();

public:
    
    static void _bind_methods();
    Titlescreen();
    ~Titlescreen();

    };
}

#endif