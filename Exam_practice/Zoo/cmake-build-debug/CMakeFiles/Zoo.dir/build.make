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
CMAKE_SOURCE_DIR = /Users/User/GreenFox/dodoo86/Exam_practice/Zoo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/User/GreenFox/dodoo86/Exam_practice/Zoo/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Zoo.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Zoo.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Zoo.dir/flags.make

CMakeFiles/Zoo.dir/main.cpp.o: CMakeFiles/Zoo.dir/flags.make
CMakeFiles/Zoo.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/User/GreenFox/dodoo86/Exam_practice/Zoo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Zoo.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Zoo.dir/main.cpp.o -c /Users/User/GreenFox/dodoo86/Exam_practice/Zoo/main.cpp

CMakeFiles/Zoo.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Zoo.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/User/GreenFox/dodoo86/Exam_practice/Zoo/main.cpp > CMakeFiles/Zoo.dir/main.cpp.i

CMakeFiles/Zoo.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Zoo.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/User/GreenFox/dodoo86/Exam_practice/Zoo/main.cpp -o CMakeFiles/Zoo.dir/main.cpp.s

CMakeFiles/Zoo.dir/Animal.cpp.o: CMakeFiles/Zoo.dir/flags.make
CMakeFiles/Zoo.dir/Animal.cpp.o: ../Animal.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/User/GreenFox/dodoo86/Exam_practice/Zoo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Zoo.dir/Animal.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Zoo.dir/Animal.cpp.o -c /Users/User/GreenFox/dodoo86/Exam_practice/Zoo/Animal.cpp

CMakeFiles/Zoo.dir/Animal.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Zoo.dir/Animal.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/User/GreenFox/dodoo86/Exam_practice/Zoo/Animal.cpp > CMakeFiles/Zoo.dir/Animal.cpp.i

CMakeFiles/Zoo.dir/Animal.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Zoo.dir/Animal.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/User/GreenFox/dodoo86/Exam_practice/Zoo/Animal.cpp -o CMakeFiles/Zoo.dir/Animal.cpp.s

CMakeFiles/Zoo.dir/Lion.cpp.o: CMakeFiles/Zoo.dir/flags.make
CMakeFiles/Zoo.dir/Lion.cpp.o: ../Lion.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/User/GreenFox/dodoo86/Exam_practice/Zoo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Zoo.dir/Lion.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Zoo.dir/Lion.cpp.o -c /Users/User/GreenFox/dodoo86/Exam_practice/Zoo/Lion.cpp

CMakeFiles/Zoo.dir/Lion.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Zoo.dir/Lion.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/User/GreenFox/dodoo86/Exam_practice/Zoo/Lion.cpp > CMakeFiles/Zoo.dir/Lion.cpp.i

CMakeFiles/Zoo.dir/Lion.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Zoo.dir/Lion.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/User/GreenFox/dodoo86/Exam_practice/Zoo/Lion.cpp -o CMakeFiles/Zoo.dir/Lion.cpp.s

CMakeFiles/Zoo.dir/Monkey.cpp.o: CMakeFiles/Zoo.dir/flags.make
CMakeFiles/Zoo.dir/Monkey.cpp.o: ../Monkey.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/User/GreenFox/dodoo86/Exam_practice/Zoo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Zoo.dir/Monkey.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Zoo.dir/Monkey.cpp.o -c /Users/User/GreenFox/dodoo86/Exam_practice/Zoo/Monkey.cpp

CMakeFiles/Zoo.dir/Monkey.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Zoo.dir/Monkey.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/User/GreenFox/dodoo86/Exam_practice/Zoo/Monkey.cpp > CMakeFiles/Zoo.dir/Monkey.cpp.i

CMakeFiles/Zoo.dir/Monkey.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Zoo.dir/Monkey.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/User/GreenFox/dodoo86/Exam_practice/Zoo/Monkey.cpp -o CMakeFiles/Zoo.dir/Monkey.cpp.s

CMakeFiles/Zoo.dir/Elephant.cpp.o: CMakeFiles/Zoo.dir/flags.make
CMakeFiles/Zoo.dir/Elephant.cpp.o: ../Elephant.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/User/GreenFox/dodoo86/Exam_practice/Zoo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Zoo.dir/Elephant.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Zoo.dir/Elephant.cpp.o -c /Users/User/GreenFox/dodoo86/Exam_practice/Zoo/Elephant.cpp

CMakeFiles/Zoo.dir/Elephant.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Zoo.dir/Elephant.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/User/GreenFox/dodoo86/Exam_practice/Zoo/Elephant.cpp > CMakeFiles/Zoo.dir/Elephant.cpp.i

CMakeFiles/Zoo.dir/Elephant.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Zoo.dir/Elephant.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/User/GreenFox/dodoo86/Exam_practice/Zoo/Elephant.cpp -o CMakeFiles/Zoo.dir/Elephant.cpp.s

CMakeFiles/Zoo.dir/Worker.cpp.o: CMakeFiles/Zoo.dir/flags.make
CMakeFiles/Zoo.dir/Worker.cpp.o: ../Worker.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/User/GreenFox/dodoo86/Exam_practice/Zoo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/Zoo.dir/Worker.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Zoo.dir/Worker.cpp.o -c /Users/User/GreenFox/dodoo86/Exam_practice/Zoo/Worker.cpp

CMakeFiles/Zoo.dir/Worker.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Zoo.dir/Worker.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/User/GreenFox/dodoo86/Exam_practice/Zoo/Worker.cpp > CMakeFiles/Zoo.dir/Worker.cpp.i

CMakeFiles/Zoo.dir/Worker.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Zoo.dir/Worker.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/User/GreenFox/dodoo86/Exam_practice/Zoo/Worker.cpp -o CMakeFiles/Zoo.dir/Worker.cpp.s

# Object files for target Zoo
Zoo_OBJECTS = \
"CMakeFiles/Zoo.dir/main.cpp.o" \
"CMakeFiles/Zoo.dir/Animal.cpp.o" \
"CMakeFiles/Zoo.dir/Lion.cpp.o" \
"CMakeFiles/Zoo.dir/Monkey.cpp.o" \
"CMakeFiles/Zoo.dir/Elephant.cpp.o" \
"CMakeFiles/Zoo.dir/Worker.cpp.o"

# External object files for target Zoo
Zoo_EXTERNAL_OBJECTS =

Zoo: CMakeFiles/Zoo.dir/main.cpp.o
Zoo: CMakeFiles/Zoo.dir/Animal.cpp.o
Zoo: CMakeFiles/Zoo.dir/Lion.cpp.o
Zoo: CMakeFiles/Zoo.dir/Monkey.cpp.o
Zoo: CMakeFiles/Zoo.dir/Elephant.cpp.o
Zoo: CMakeFiles/Zoo.dir/Worker.cpp.o
Zoo: CMakeFiles/Zoo.dir/build.make
Zoo: CMakeFiles/Zoo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/User/GreenFox/dodoo86/Exam_practice/Zoo/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable Zoo"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Zoo.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Zoo.dir/build: Zoo

.PHONY : CMakeFiles/Zoo.dir/build

CMakeFiles/Zoo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Zoo.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Zoo.dir/clean

CMakeFiles/Zoo.dir/depend:
	cd /Users/User/GreenFox/dodoo86/Exam_practice/Zoo/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/User/GreenFox/dodoo86/Exam_practice/Zoo /Users/User/GreenFox/dodoo86/Exam_practice/Zoo /Users/User/GreenFox/dodoo86/Exam_practice/Zoo/cmake-build-debug /Users/User/GreenFox/dodoo86/Exam_practice/Zoo/cmake-build-debug /Users/User/GreenFox/dodoo86/Exam_practice/Zoo/cmake-build-debug/CMakeFiles/Zoo.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Zoo.dir/depend
