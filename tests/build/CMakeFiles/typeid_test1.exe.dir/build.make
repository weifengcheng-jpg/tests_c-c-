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
include CMakeFiles/typeid_test1.exe.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/typeid_test1.exe.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/typeid_test1.exe.dir/flags.make

CMakeFiles/typeid_test1.exe.dir/tests/typeid_test1.cc.o: CMakeFiles/typeid_test1.exe.dir/flags.make
CMakeFiles/typeid_test1.exe.dir/tests/typeid_test1.cc.o: ../tests/typeid_test1.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/working/tests_c-c-/tests/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/typeid_test1.exe.dir/tests/typeid_test1.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/typeid_test1.exe.dir/tests/typeid_test1.cc.o -c /home/working/tests_c-c-/tests/tests/typeid_test1.cc

CMakeFiles/typeid_test1.exe.dir/tests/typeid_test1.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/typeid_test1.exe.dir/tests/typeid_test1.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/working/tests_c-c-/tests/tests/typeid_test1.cc > CMakeFiles/typeid_test1.exe.dir/tests/typeid_test1.cc.i

CMakeFiles/typeid_test1.exe.dir/tests/typeid_test1.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/typeid_test1.exe.dir/tests/typeid_test1.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/working/tests_c-c-/tests/tests/typeid_test1.cc -o CMakeFiles/typeid_test1.exe.dir/tests/typeid_test1.cc.s

# Object files for target typeid_test1.exe
typeid_test1_exe_OBJECTS = \
"CMakeFiles/typeid_test1.exe.dir/tests/typeid_test1.cc.o"

# External object files for target typeid_test1.exe
typeid_test1_exe_EXTERNAL_OBJECTS =

bin/typeid_test1.exe: CMakeFiles/typeid_test1.exe.dir/tests/typeid_test1.cc.o
bin/typeid_test1.exe: CMakeFiles/typeid_test1.exe.dir/build.make
bin/typeid_test1.exe: CMakeFiles/typeid_test1.exe.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/working/tests_c-c-/tests/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable bin/typeid_test1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/typeid_test1.exe.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/typeid_test1.exe.dir/build: bin/typeid_test1.exe

.PHONY : CMakeFiles/typeid_test1.exe.dir/build

CMakeFiles/typeid_test1.exe.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/typeid_test1.exe.dir/cmake_clean.cmake
.PHONY : CMakeFiles/typeid_test1.exe.dir/clean

CMakeFiles/typeid_test1.exe.dir/depend:
	cd /home/working/tests_c-c-/tests/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/working/tests_c-c-/tests /home/working/tests_c-c-/tests /home/working/tests_c-c-/tests/build /home/working/tests_c-c-/tests/build /home/working/tests_c-c-/tests/build/CMakeFiles/typeid_test1.exe.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/typeid_test1.exe.dir/depend

