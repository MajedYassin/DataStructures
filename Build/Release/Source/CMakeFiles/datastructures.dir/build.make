# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

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
CMAKE_COMMAND = /home/majed/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/203.6682.181/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/majed/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/203.6682.181/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/majed/CLionProjects/DataStructures

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/majed/CLionProjects/DataStructures/Build/Release

# Include any dependencies generated for this target.
include Source/CMakeFiles/datastructures.dir/depend.make

# Include the progress variables for this target.
include Source/CMakeFiles/datastructures.dir/progress.make

# Include the compile flags for this target's objects.
include Source/CMakeFiles/datastructures.dir/flags.make

Source/CMakeFiles/datastructures.dir/DataStructures.cpp.o: Source/CMakeFiles/datastructures.dir/flags.make
Source/CMakeFiles/datastructures.dir/DataStructures.cpp.o: ../../Source/DataStructures.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/majed/CLionProjects/DataStructures/Build/Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Source/CMakeFiles/datastructures.dir/DataStructures.cpp.o"
	cd /home/majed/CLionProjects/DataStructures/Build/Release/Source && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/datastructures.dir/DataStructures.cpp.o -c /home/majed/CLionProjects/DataStructures/Source/DataStructures.cpp

Source/CMakeFiles/datastructures.dir/DataStructures.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/datastructures.dir/DataStructures.cpp.i"
	cd /home/majed/CLionProjects/DataStructures/Build/Release/Source && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/majed/CLionProjects/DataStructures/Source/DataStructures.cpp > CMakeFiles/datastructures.dir/DataStructures.cpp.i

Source/CMakeFiles/datastructures.dir/DataStructures.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/datastructures.dir/DataStructures.cpp.s"
	cd /home/majed/CLionProjects/DataStructures/Build/Release/Source && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/majed/CLionProjects/DataStructures/Source/DataStructures.cpp -o CMakeFiles/datastructures.dir/DataStructures.cpp.s

# Object files for target datastructures
datastructures_OBJECTS = \
"CMakeFiles/datastructures.dir/DataStructures.cpp.o"

# External object files for target datastructures
datastructures_EXTERNAL_OBJECTS =

Source/libdatastructures.a: Source/CMakeFiles/datastructures.dir/DataStructures.cpp.o
Source/libdatastructures.a: Source/CMakeFiles/datastructures.dir/build.make
Source/libdatastructures.a: Source/CMakeFiles/datastructures.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/majed/CLionProjects/DataStructures/Build/Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libdatastructures.a"
	cd /home/majed/CLionProjects/DataStructures/Build/Release/Source && $(CMAKE_COMMAND) -P CMakeFiles/datastructures.dir/cmake_clean_target.cmake
	cd /home/majed/CLionProjects/DataStructures/Build/Release/Source && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/datastructures.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Source/CMakeFiles/datastructures.dir/build: Source/libdatastructures.a

.PHONY : Source/CMakeFiles/datastructures.dir/build

Source/CMakeFiles/datastructures.dir/clean:
	cd /home/majed/CLionProjects/DataStructures/Build/Release/Source && $(CMAKE_COMMAND) -P CMakeFiles/datastructures.dir/cmake_clean.cmake
.PHONY : Source/CMakeFiles/datastructures.dir/clean

Source/CMakeFiles/datastructures.dir/depend:
	cd /home/majed/CLionProjects/DataStructures/Build/Release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/majed/CLionProjects/DataStructures /home/majed/CLionProjects/DataStructures/Source /home/majed/CLionProjects/DataStructures/Build/Release /home/majed/CLionProjects/DataStructures/Build/Release/Source /home/majed/CLionProjects/DataStructures/Build/Release/Source/CMakeFiles/datastructures.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Source/CMakeFiles/datastructures.dir/depend

