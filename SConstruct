#!/usr/bin/env python
import os
import sys

libname = "robot_arena"

if not (os.path.isdir("godot-cpp") and os.listdir("godot-cpp")):
    print("godot-cpp is missing. Run: git submodule update --init")
    sys.exit(1)

env = SConscript("godot-cpp/SConstruct", {"api_version": "4.7"})
env.Append(CPPPATH=["src/"])
sources = Glob("src/*.cpp")

# Matches the file names listed in project/bin/robot_arena.gdextension
suffix = env["suffix"].replace(".dev", "").replace(".universal", "")
filename = "{}{}{}{}".format(env.subst("$SHLIBPREFIX"), libname, suffix, env.subst("$SHLIBSUFFIX"))

library = env.SharedLibrary("project/bin/{}/{}".format(env["platform"], filename), source=sources)
Default(library)
