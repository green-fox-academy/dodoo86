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
include CMakeFiles/Lofax.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Lofax.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Lofax.dir/flags.make

CMakeFiles/Lofax.dir/main.cpp.o: CMakeFiles/Lofax.dir/flags.make
CMakeFiles/Lofax.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/User/GreenFox/dodoo86/Week5/Day-5/Lofax/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Lofax.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Lofax.dir/main.cpp.o -c /Users/User/GreenFox/dodoo86/Week5/Day-5/Lofax/main.cpp

CMakeFiles/Lofax.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Lofax.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/User/GreenFox/dodoo86/Week5/Day-5/Lofax/main.cpp > CMakeFiles/Lofax.dir/main.cpp.i

CMakeFiles/Lofax.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Lofax.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/User/GreenFox/dodoo86/Week5/Day-5/Lofax/main.cpp -o CMakeFiles/Lofax.dir/main.cpp.s

# Object files for target Lofax
Lofax_OBJECTS = \
"CMakeFiles/Lofax.dir/main.cpp.o"

# External object files for target Lofax
Lofax_EXTERNAL_OBJECTS =

Lofax: CMakeFiles/Lofax.dir/main.cpp.o
Lofax: CMakeFiles/Lofax.dir/build.make
Lofax: MyApp_lib/libMyApp_lib.a
Lofax: CMakeFiles/Lofax.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/User/GreenFox/dodoo86/Week5/Day-5/Lofax/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Lofax"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Lofax.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Lofax.dir/build: Lofax

.PHONY : CMakeFiles/Lofax.dir/build

CMakeFiles/Lofax.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Lofax.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Lofax.dir/clean

CMakeFiles/Lofax.dir/depend:
	cd /Users/User/GreenFox/dodoo86/Week5/Day-5/Lofax/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/User/GreenFox/dodoo86/Week5/Day-5/Lofax /Users/User/GreenFox/dodoo86/Week5/Day-5/Lofax /Users/User/GreenFox/dodoo86/Week5/Day-5/Lofax/cmake-build-debug /Users/User/GreenFox/dodoo86/Week5/Day-5/Lofax/cmake-build-debug /Users/User/GreenFox/dodoo86/Week5/Day-5/Lofax/cmake-build-debug/CMakeFiles/Lofax.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Lofax.dir/depend

