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
CMAKE_SOURCE_DIR = /Users/User/GreenFox/dodoo86/Week5/Day-2/Class_Practice

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/User/GreenFox/dodoo86/Week5/Day-2/Class_Practice/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Class_Practice.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Class_Practice.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Class_Practice.dir/flags.make

CMakeFiles/Class_Practice.dir/main.cpp.o: CMakeFiles/Class_Practice.dir/flags.make
CMakeFiles/Class_Practice.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/User/GreenFox/dodoo86/Week5/Day-2/Class_Practice/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Class_Practice.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Class_Practice.dir/main.cpp.o -c /Users/User/GreenFox/dodoo86/Week5/Day-2/Class_Practice/main.cpp

CMakeFiles/Class_Practice.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Class_Practice.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/User/GreenFox/dodoo86/Week5/Day-2/Class_Practice/main.cpp > CMakeFiles/Class_Practice.dir/main.cpp.i

CMakeFiles/Class_Practice.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Class_Practice.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/User/GreenFox/dodoo86/Week5/Day-2/Class_Practice/main.cpp -o CMakeFiles/Class_Practice.dir/main.cpp.s

CMakeFiles/Class_Practice.dir/PostIt.cpp.o: CMakeFiles/Class_Practice.dir/flags.make
CMakeFiles/Class_Practice.dir/PostIt.cpp.o: ../PostIt.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/User/GreenFox/dodoo86/Week5/Day-2/Class_Practice/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Class_Practice.dir/PostIt.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Class_Practice.dir/PostIt.cpp.o -c /Users/User/GreenFox/dodoo86/Week5/Day-2/Class_Practice/PostIt.cpp

CMakeFiles/Class_Practice.dir/PostIt.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Class_Practice.dir/PostIt.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/User/GreenFox/dodoo86/Week5/Day-2/Class_Practice/PostIt.cpp > CMakeFiles/Class_Practice.dir/PostIt.cpp.i

CMakeFiles/Class_Practice.dir/PostIt.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Class_Practice.dir/PostIt.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/User/GreenFox/dodoo86/Week5/Day-2/Class_Practice/PostIt.cpp -o CMakeFiles/Class_Practice.dir/PostIt.cpp.s

# Object files for target Class_Practice
Class_Practice_OBJECTS = \
"CMakeFiles/Class_Practice.dir/main.cpp.o" \
"CMakeFiles/Class_Practice.dir/PostIt.cpp.o"

# External object files for target Class_Practice
Class_Practice_EXTERNAL_OBJECTS =

Class_Practice: CMakeFiles/Class_Practice.dir/main.cpp.o
Class_Practice: CMakeFiles/Class_Practice.dir/PostIt.cpp.o
Class_Practice: CMakeFiles/Class_Practice.dir/build.make
Class_Practice: CMakeFiles/Class_Practice.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/User/GreenFox/dodoo86/Week5/Day-2/Class_Practice/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Class_Practice"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Class_Practice.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Class_Practice.dir/build: Class_Practice

.PHONY : CMakeFiles/Class_Practice.dir/build

CMakeFiles/Class_Practice.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Class_Practice.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Class_Practice.dir/clean

CMakeFiles/Class_Practice.dir/depend:
	cd /Users/User/GreenFox/dodoo86/Week5/Day-2/Class_Practice/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/User/GreenFox/dodoo86/Week5/Day-2/Class_Practice /Users/User/GreenFox/dodoo86/Week5/Day-2/Class_Practice /Users/User/GreenFox/dodoo86/Week5/Day-2/Class_Practice/cmake-build-debug /Users/User/GreenFox/dodoo86/Week5/Day-2/Class_Practice/cmake-build-debug /Users/User/GreenFox/dodoo86/Week5/Day-2/Class_Practice/cmake-build-debug/CMakeFiles/Class_Practice.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Class_Practice.dir/depend

