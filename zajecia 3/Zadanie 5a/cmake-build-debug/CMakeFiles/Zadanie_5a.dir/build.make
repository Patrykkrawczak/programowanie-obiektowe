# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.9

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "E:\CLion 2017.3\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "E:\CLion 2017.3\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "E:\PPPP\programowanie-obiektowe\zajecia 3\Zadanie 5a"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "E:\PPPP\programowanie-obiektowe\zajecia 3\Zadanie 5a\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Zadanie_5a.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Zadanie_5a.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Zadanie_5a.dir/flags.make

CMakeFiles/Zadanie_5a.dir/main.cpp.obj: CMakeFiles/Zadanie_5a.dir/flags.make
CMakeFiles/Zadanie_5a.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="E:\PPPP\programowanie-obiektowe\zajecia 3\Zadanie 5a\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Zadanie_5a.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-7~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Zadanie_5a.dir\main.cpp.obj -c "E:\PPPP\programowanie-obiektowe\zajecia 3\Zadanie 5a\main.cpp"

CMakeFiles/Zadanie_5a.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Zadanie_5a.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-7~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "E:\PPPP\programowanie-obiektowe\zajecia 3\Zadanie 5a\main.cpp" > CMakeFiles\Zadanie_5a.dir\main.cpp.i

CMakeFiles/Zadanie_5a.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Zadanie_5a.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-7~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "E:\PPPP\programowanie-obiektowe\zajecia 3\Zadanie 5a\main.cpp" -o CMakeFiles\Zadanie_5a.dir\main.cpp.s

CMakeFiles/Zadanie_5a.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/Zadanie_5a.dir/main.cpp.obj.requires

CMakeFiles/Zadanie_5a.dir/main.cpp.obj.provides: CMakeFiles/Zadanie_5a.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\Zadanie_5a.dir\build.make CMakeFiles/Zadanie_5a.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/Zadanie_5a.dir/main.cpp.obj.provides

CMakeFiles/Zadanie_5a.dir/main.cpp.obj.provides.build: CMakeFiles/Zadanie_5a.dir/main.cpp.obj


# Object files for target Zadanie_5a
Zadanie_5a_OBJECTS = \
"CMakeFiles/Zadanie_5a.dir/main.cpp.obj"

# External object files for target Zadanie_5a
Zadanie_5a_EXTERNAL_OBJECTS =

Zadanie_5a.exe: CMakeFiles/Zadanie_5a.dir/main.cpp.obj
Zadanie_5a.exe: CMakeFiles/Zadanie_5a.dir/build.make
Zadanie_5a.exe: CMakeFiles/Zadanie_5a.dir/linklibs.rsp
Zadanie_5a.exe: CMakeFiles/Zadanie_5a.dir/objects1.rsp
Zadanie_5a.exe: CMakeFiles/Zadanie_5a.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="E:\PPPP\programowanie-obiektowe\zajecia 3\Zadanie 5a\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Zadanie_5a.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Zadanie_5a.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Zadanie_5a.dir/build: Zadanie_5a.exe

.PHONY : CMakeFiles/Zadanie_5a.dir/build

CMakeFiles/Zadanie_5a.dir/requires: CMakeFiles/Zadanie_5a.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/Zadanie_5a.dir/requires

CMakeFiles/Zadanie_5a.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Zadanie_5a.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Zadanie_5a.dir/clean

CMakeFiles/Zadanie_5a.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "E:\PPPP\programowanie-obiektowe\zajecia 3\Zadanie 5a" "E:\PPPP\programowanie-obiektowe\zajecia 3\Zadanie 5a" "E:\PPPP\programowanie-obiektowe\zajecia 3\Zadanie 5a\cmake-build-debug" "E:\PPPP\programowanie-obiektowe\zajecia 3\Zadanie 5a\cmake-build-debug" "E:\PPPP\programowanie-obiektowe\zajecia 3\Zadanie 5a\cmake-build-debug\CMakeFiles\Zadanie_5a.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Zadanie_5a.dir/depend

