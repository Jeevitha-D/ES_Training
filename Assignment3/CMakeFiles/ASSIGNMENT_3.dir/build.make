# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/rently/Desktop/ES_Training/ASSIGNMENT_3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/rently/Desktop/ES_Training/ASSIGNMENT_3

# Include any dependencies generated for this target.
include CMakeFiles/ASSIGNMENT_3.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ASSIGNMENT_3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ASSIGNMENT_3.dir/flags.make

CMakeFiles/ASSIGNMENT_3.dir/main.c.o: CMakeFiles/ASSIGNMENT_3.dir/flags.make
CMakeFiles/ASSIGNMENT_3.dir/main.c.o: main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/rently/Desktop/ES_Training/ASSIGNMENT_3/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/ASSIGNMENT_3.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ASSIGNMENT_3.dir/main.c.o   -c /home/rently/Desktop/ES_Training/ASSIGNMENT_3/main.c

CMakeFiles/ASSIGNMENT_3.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ASSIGNMENT_3.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/rently/Desktop/ES_Training/ASSIGNMENT_3/main.c > CMakeFiles/ASSIGNMENT_3.dir/main.c.i

CMakeFiles/ASSIGNMENT_3.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ASSIGNMENT_3.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/rently/Desktop/ES_Training/ASSIGNMENT_3/main.c -o CMakeFiles/ASSIGNMENT_3.dir/main.c.s

# Object files for target ASSIGNMENT_3
ASSIGNMENT_3_OBJECTS = \
"CMakeFiles/ASSIGNMENT_3.dir/main.c.o"

# External object files for target ASSIGNMENT_3
ASSIGNMENT_3_EXTERNAL_OBJECTS =

ASSIGNMENT_3: CMakeFiles/ASSIGNMENT_3.dir/main.c.o
ASSIGNMENT_3: CMakeFiles/ASSIGNMENT_3.dir/build.make
ASSIGNMENT_3: CMakeFiles/ASSIGNMENT_3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/rently/Desktop/ES_Training/ASSIGNMENT_3/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable ASSIGNMENT_3"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ASSIGNMENT_3.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ASSIGNMENT_3.dir/build: ASSIGNMENT_3

.PHONY : CMakeFiles/ASSIGNMENT_3.dir/build

CMakeFiles/ASSIGNMENT_3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ASSIGNMENT_3.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ASSIGNMENT_3.dir/clean

CMakeFiles/ASSIGNMENT_3.dir/depend:
	cd /home/rently/Desktop/ES_Training/ASSIGNMENT_3 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/rently/Desktop/ES_Training/ASSIGNMENT_3 /home/rently/Desktop/ES_Training/ASSIGNMENT_3 /home/rently/Desktop/ES_Training/ASSIGNMENT_3 /home/rently/Desktop/ES_Training/ASSIGNMENT_3 /home/rently/Desktop/ES_Training/ASSIGNMENT_3/CMakeFiles/ASSIGNMENT_3.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ASSIGNMENT_3.dir/depend

