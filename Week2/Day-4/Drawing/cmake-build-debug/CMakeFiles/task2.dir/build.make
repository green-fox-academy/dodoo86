# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/User/GreenFox/dodoo86/Week2/Day-4/Drawing

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/User/GreenFox/dodoo86/Week2/Day-4/Drawing/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/task2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/task2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/task2.dir/flags.make

CMakeFiles/task2.dir/main.cpp.o: CMakeFiles/task2.dir/flags.make
CMakeFiles/task2.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/User/GreenFox/dodoo86/Week2/Day-4/Drawing/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/task2.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/task2.dir/main.cpp.o -c /Users/User/GreenFox/dodoo86/Week2/Day-4/Drawing/main.cpp

CMakeFiles/task2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/task2.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/User/GreenFox/dodoo86/Week2/Day-4/Drawing/main.cpp > CMakeFiles/task2.dir/main.cpp.i

CMakeFiles/task2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/task2.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/User/GreenFox/dodoo86/Week2/Day-4/Drawing/main.cpp -o CMakeFiles/task2.dir/main.cpp.s

CMakeFiles/task2.dir/task2.cpp.o: CMakeFiles/task2.dir/flags.make
CMakeFiles/task2.dir/task2.cpp.o: ../task2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/User/GreenFox/dodoo86/Week2/Day-4/Drawing/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/task2.dir/task2.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/task2.dir/task2.cpp.o -c /Users/User/GreenFox/dodoo86/Week2/Day-4/Drawing/task2.cpp

CMakeFiles/task2.dir/task2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/task2.dir/task2.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/User/GreenFox/dodoo86/Week2/Day-4/Drawing/task2.cpp > CMakeFiles/task2.dir/task2.cpp.i

CMakeFiles/task2.dir/task2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/task2.dir/task2.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/User/GreenFox/dodoo86/Week2/Day-4/Drawing/task2.cpp -o CMakeFiles/task2.dir/task2.cpp.s

# Object files for target task2
task2_OBJECTS = \
"CMakeFiles/task2.dir/main.cpp.o" \
"CMakeFiles/task2.dir/task2.cpp.o"

# External object files for target task2
task2_EXTERNAL_OBJECTS =

task2: CMakeFiles/task2.dir/main.cpp.o
task2: CMakeFiles/task2.dir/task2.cpp.o
task2: CMakeFiles/task2.dir/build.make
task2: CMakeFiles/task2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/User/GreenFox/dodoo86/Week2/Day-4/Drawing/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable task2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/task2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/task2.dir/build: task2

.PHONY : CMakeFiles/task2.dir/build

CMakeFiles/task2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/task2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/task2.dir/clean

CMakeFiles/task2.dir/depend:
	cd /Users/User/GreenFox/dodoo86/Week2/Day-4/Drawing/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/User/GreenFox/dodoo86/Week2/Day-4/Drawing /Users/User/GreenFox/dodoo86/Week2/Day-4/Drawing /Users/User/GreenFox/dodoo86/Week2/Day-4/Drawing/cmake-build-debug /Users/User/GreenFox/dodoo86/Week2/Day-4/Drawing/cmake-build-debug /Users/User/GreenFox/dodoo86/Week2/Day-4/Drawing/cmake-build-debug/CMakeFiles/task2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/task2.dir/depend

