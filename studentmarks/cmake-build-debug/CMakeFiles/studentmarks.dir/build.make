# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_SOURCE_DIR = /Users/ccu29/Documents/bucks/studentmarks

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/ccu29/Documents/bucks/studentmarks/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/studentmarks.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/studentmarks.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/studentmarks.dir/flags.make

CMakeFiles/studentmarks.dir/subject.cpp.o: CMakeFiles/studentmarks.dir/flags.make
CMakeFiles/studentmarks.dir/subject.cpp.o: ../subject.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ccu29/Documents/bucks/studentmarks/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/studentmarks.dir/subject.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/studentmarks.dir/subject.cpp.o -c /Users/ccu29/Documents/bucks/studentmarks/subject.cpp

CMakeFiles/studentmarks.dir/subject.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/studentmarks.dir/subject.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ccu29/Documents/bucks/studentmarks/subject.cpp > CMakeFiles/studentmarks.dir/subject.cpp.i

CMakeFiles/studentmarks.dir/subject.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/studentmarks.dir/subject.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ccu29/Documents/bucks/studentmarks/subject.cpp -o CMakeFiles/studentmarks.dir/subject.cpp.s

# Object files for target studentmarks
studentmarks_OBJECTS = \
"CMakeFiles/studentmarks.dir/subject.cpp.o"

# External object files for target studentmarks
studentmarks_EXTERNAL_OBJECTS =

studentmarks: CMakeFiles/studentmarks.dir/subject.cpp.o
studentmarks: CMakeFiles/studentmarks.dir/build.make
studentmarks: CMakeFiles/studentmarks.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/ccu29/Documents/bucks/studentmarks/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable studentmarks"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/studentmarks.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/studentmarks.dir/build: studentmarks

.PHONY : CMakeFiles/studentmarks.dir/build

CMakeFiles/studentmarks.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/studentmarks.dir/cmake_clean.cmake
.PHONY : CMakeFiles/studentmarks.dir/clean

CMakeFiles/studentmarks.dir/depend:
	cd /Users/ccu29/Documents/bucks/studentmarks/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/ccu29/Documents/bucks/studentmarks /Users/ccu29/Documents/bucks/studentmarks /Users/ccu29/Documents/bucks/studentmarks/cmake-build-debug /Users/ccu29/Documents/bucks/studentmarks/cmake-build-debug /Users/ccu29/Documents/bucks/studentmarks/cmake-build-debug/CMakeFiles/studentmarks.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/studentmarks.dir/depend

