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
include CMakeFiles/assert.exe.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/assert.exe.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/assert.exe.dir/flags.make

CMakeFiles/assert.exe.dir/tests/assert.cc.o: CMakeFiles/assert.exe.dir/flags.make
CMakeFiles/assert.exe.dir/tests/assert.cc.o: ../tests/assert.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/working/tests_c-c-/tests/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/assert.exe.dir/tests/assert.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/assert.exe.dir/tests/assert.cc.o -c /home/working/tests_c-c-/tests/tests/assert.cc

CMakeFiles/assert.exe.dir/tests/assert.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/assert.exe.dir/tests/assert.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/working/tests_c-c-/tests/tests/assert.cc > CMakeFiles/assert.exe.dir/tests/assert.cc.i

CMakeFiles/assert.exe.dir/tests/assert.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/assert.exe.dir/tests/assert.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/working/tests_c-c-/tests/tests/assert.cc -o CMakeFiles/assert.exe.dir/tests/assert.cc.s

# Object files for target assert.exe
assert_exe_OBJECTS = \
"CMakeFiles/assert.exe.dir/tests/assert.cc.o"

# External object files for target assert.exe
assert_exe_EXTERNAL_OBJECTS =

bin/assert.exe: CMakeFiles/assert.exe.dir/tests/assert.cc.o
bin/assert.exe: CMakeFiles/assert.exe.dir/build.make
bin/assert.exe: CMakeFiles/assert.exe.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/working/tests_c-c-/tests/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable bin/assert.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/assert.exe.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/assert.exe.dir/build: bin/assert.exe

.PHONY : CMakeFiles/assert.exe.dir/build

CMakeFiles/assert.exe.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/assert.exe.dir/cmake_clean.cmake
.PHONY : CMakeFiles/assert.exe.dir/clean

CMakeFiles/assert.exe.dir/depend:
	cd /home/working/tests_c-c-/tests/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/working/tests_c-c-/tests /home/working/tests_c-c-/tests /home/working/tests_c-c-/tests/build /home/working/tests_c-c-/tests/build /home/working/tests_c-c-/tests/build/CMakeFiles/assert.exe.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/assert.exe.dir/depend
