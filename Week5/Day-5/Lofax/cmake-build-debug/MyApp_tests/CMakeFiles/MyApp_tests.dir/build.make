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
CMAKE_SOURCE_DIR = /Users/User/GreenFox/dodoo86/Week5/Day-5/Lofax

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/User/GreenFox/dodoo86/Week5/Day-5/Lofax/cmake-build-debug

# Include any dependencies generated for this target.
include MyApp_tests/CMakeFiles/MyApp_tests.dir/depend.make

# Include the progress variables for this target.
include MyApp_tests/CMakeFiles/MyApp_tests.dir/progress.make

# Include the compile flags for this target's objects.
include MyApp_tests/CMakeFiles/MyApp_tests.dir/flags.make

MyApp_tests/CMakeFiles/MyApp_tests.dir/myAppTest.cpp.o: MyApp_tests/CMakeFiles/MyApp_tests.dir/flags.make
MyApp_tests/CMakeFiles/MyApp_tests.dir/myAppTest.cpp.o: ../MyApp_tests/myAppTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/User/GreenFox/dodoo86/Week5/Day-5/Lofax/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object MyApp_tests/CMakeFiles/MyApp_tests.dir/myAppTest.cpp.o"
	cd /Users/User/GreenFox/dodoo86/Week5/Day-5/Lofax/cmake-build-debug/MyApp_tests && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MyApp_tests.dir/myAppTest.cpp.o -c /Users/User/GreenFox/dodoo86/Week5/Day-5/Lofax/MyApp_tests/myAppTest.cpp

MyApp_tests/CMakeFiles/MyApp_tests.dir/myAppTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MyApp_tests.dir/myAppTest.cpp.i"
	cd /Users/User/GreenFox/dodoo86/Week5/Day-5/Lofax/cmake-build-debug/MyApp_tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/User/GreenFox/dodoo86/Week5/Day-5/Lofax/MyApp_tests/myAppTest.cpp > CMakeFiles/MyApp_tests.dir/myAppTest.cpp.i

MyApp_tests/CMakeFiles/MyApp_tests.dir/myAppTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MyApp_tests.dir/myAppTest.cpp.s"
	cd /Users/User/GreenFox/dodoo86/Week5/Day-5/Lofax/cmake-build-debug/MyApp_tests && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/User/GreenFox/dodoo86/Week5/Day-5/Lofax/MyApp_tests/myAppTest.cpp -o CMakeFiles/MyApp_tests.dir/myAppTest.cpp.s

# Object files for target MyApp_tests
MyApp_tests_OBJECTS = \
"CMakeFiles/MyApp_tests.dir/myAppTest.cpp.o"

# External object files for target MyApp_tests
MyApp_tests_EXTERNAL_OBJECTS =

MyApp_tests/MyApp_tests: MyApp_tests/CMakeFiles/MyApp_tests.dir/myAppTest.cpp.o
MyApp_tests/MyApp_tests: MyApp_tests/CMakeFiles/MyApp_tests.dir/build.make
MyApp_tests/MyApp_tests: lib/libgtestd.a
MyApp_tests/MyApp_tests: lib/libgtest_maind.a
MyApp_tests/MyApp_tests: MyApp_lib/libMyApp_lib.a
MyApp_tests/MyApp_tests: lib/libgtestd.a
MyApp_tests/MyApp_tests: MyApp_tests/CMakeFiles/MyApp_tests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/User/GreenFox/dodoo86/Week5/Day-5/Lofax/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable MyApp_tests"
	cd /Users/User/GreenFox/dodoo86/Week5/Day-5/Lofax/cmake-build-debug/MyApp_tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MyApp_tests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
MyApp_tests/CMakeFiles/MyApp_tests.dir/build: MyApp_tests/MyApp_tests

.PHONY : MyApp_tests/CMakeFiles/MyApp_tests.dir/build

MyApp_tests/CMakeFiles/MyApp_tests.dir/clean:
	cd /Users/User/GreenFox/dodoo86/Week5/Day-5/Lofax/cmake-build-debug/MyApp_tests && $(CMAKE_COMMAND) -P CMakeFiles/MyApp_tests.dir/cmake_clean.cmake
.PHONY : MyApp_tests/CMakeFiles/MyApp_tests.dir/clean

MyApp_tests/CMakeFiles/MyApp_tests.dir/depend:
	cd /Users/User/GreenFox/dodoo86/Week5/Day-5/Lofax/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/User/GreenFox/dodoo86/Week5/Day-5/Lofax /Users/User/GreenFox/dodoo86/Week5/Day-5/Lofax/MyApp_tests /Users/User/GreenFox/dodoo86/Week5/Day-5/Lofax/cmake-build-debug /Users/User/GreenFox/dodoo86/Week5/Day-5/Lofax/cmake-build-debug/MyApp_tests /Users/User/GreenFox/dodoo86/Week5/Day-5/Lofax/cmake-build-debug/MyApp_tests/CMakeFiles/MyApp_tests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : MyApp_tests/CMakeFiles/MyApp_tests.dir/depend

