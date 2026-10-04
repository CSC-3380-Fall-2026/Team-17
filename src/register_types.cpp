#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/godot.hpp>

using namespace godot;

void initializeTypes(ModuleInitializationLevel level) {
    if (level != MODULE_INITIALIZATION_LEVEL_SCENE) {
        return;
    }
    // Register each C++ class here, e.g. GDREGISTER_CLASS(Player);
}

void uninitializeTypes(ModuleInitializationLevel level) {
}

extern "C" {
// Godot calls this when it loads the library. The name must match entry_symbol in robot_arena.gdextension
GDExtensionBool GDE_EXPORT robot_arena_init(GDExtensionInterfaceGetProcAddress getProcAddress, GDExtensionClassLibraryPtr library, GDExtensionInitialization *init) {
    GDExtensionBinding::InitObject initObj(getProcAddress, library, init);
    initObj.register_initializer(initializeTypes);
    initObj.register_terminator(uninitializeTypes);
    initObj.set_minimum_library_initialization_level(MODULE_INITIALIZATION_LEVEL_SCENE);
    return initObj.init();
}
}
