# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.11

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Produce verbose output by default.
VERBOSE = 1

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/working/tests_c-c-/tests

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/working/tests_c-c-/tests/build

# Include any dependencies generated for this target.
include CMakeFiles/set_test2.exe.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/set_test2.exe.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/set_test2.exe.dir/flags.make

CMakeFiles/set_test2.exe.dir/tests/set_test2.cc.o: CMakeFiles/set_test2.exe.dir/flags.make
CMakeFiles/set_test2.exe.dir/tests/set_test2.cc.o: ../tests/set_test2.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/working/tests_c-c-/tests/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/set_test2.exe.dir/tests/set_test2.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/set_test2.exe.dir/tests/set_test2.cc.o -c /home/working/tests_c-c-/tests/tests/set_test2.cc

CMakeFiles/set_test2.exe.dir/tests/set_test2.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/set_test2.exe.dir/tests/set_test2.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/working/tests_c-c-/tests/tests/set_test2.cc > CMakeFiles/set_test2.exe.dir/tests/set_test2.cc.i

CMakeFiles/set_test2.exe.dir/tests/set_test2.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/set_test2.exe.dir/tests/set_test2.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/working/tests_c-c-/tests/tests/set_test2.cc -o CMakeFiles/set_test2.exe.dir/tests/set_test2.cc.s

# Object files for target set_test2.exe
set_test2_exe_OBJECTS = \
"CMakeFiles/set_test2.exe.dir/tests/set_test2.cc.o"

# External object files for target set_test2.exe
set_test2_exe_EXTERNAL_OBJECTS =

bin/set_test2.exe: CMakeFiles/set_test2.exe.dir/tests/set_test2.cc.o
bin/set_test2.exe: CMakeFiles/set_test2.exe.dir/build.make
bin/set_test2.exe: CMakeFiles/set_test2.exe.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/working/tests_c-c-/tests/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable bin/set_test2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/set_test2.exe.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/set_test2.exe.dir/build: bin/set_test2.exe

.PHONY : CMakeFiles/set_test2.exe.dir/build

CMakeFiles/set_test2.exe.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/set_test2.exe.dir/cmake_clean.cmake
.PHONY : CMakeFiles/set_test2.exe.dir/clean

CMakeFiles/set_test2.exe.dir/depend:
	cd /home/working/tests_c-c-/tests/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/working/tests_c-c-/tests /home/working/tests_c-c-/tests /home/working/tests_c-c-/tests/build /home/working/tests_c-c-/tests/build /home/working/tests_c-c-/tests/build/CMakeFiles/set_test2.exe.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/set_test2.exe.dir/depend

