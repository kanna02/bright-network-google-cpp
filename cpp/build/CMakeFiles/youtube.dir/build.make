# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.21

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

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CMake.app/Contents/bin/cmake

# The command to remove a file.
RM = /Applications/CMake.app/Contents/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/me/Desktop/google/google-code-sample/cpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/me/Desktop/google/google-code-sample/cpp/build

# Include any dependencies generated for this target.
include CMakeFiles/youtube.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/youtube.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/youtube.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/youtube.dir/flags.make

CMakeFiles/youtube.dir/src/main.cpp.o: CMakeFiles/youtube.dir/flags.make
CMakeFiles/youtube.dir/src/main.cpp.o: ../src/main.cpp
CMakeFiles/youtube.dir/src/main.cpp.o: CMakeFiles/youtube.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/me/Desktop/google/google-code-sample/cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/youtube.dir/src/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/youtube.dir/src/main.cpp.o -MF CMakeFiles/youtube.dir/src/main.cpp.o.d -o CMakeFiles/youtube.dir/src/main.cpp.o -c /Users/me/Desktop/google/google-code-sample/cpp/src/main.cpp

CMakeFiles/youtube.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/youtube.dir/src/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/me/Desktop/google/google-code-sample/cpp/src/main.cpp > CMakeFiles/youtube.dir/src/main.cpp.i

CMakeFiles/youtube.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/youtube.dir/src/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/me/Desktop/google/google-code-sample/cpp/src/main.cpp -o CMakeFiles/youtube.dir/src/main.cpp.s

# Object files for target youtube
youtube_OBJECTS = \
"CMakeFiles/youtube.dir/src/main.cpp.o"

# External object files for target youtube
youtube_EXTERNAL_OBJECTS =

youtube: CMakeFiles/youtube.dir/src/main.cpp.o
youtube: CMakeFiles/youtube.dir/build.make
youtube: libyoutube_lib.a
youtube: CMakeFiles/youtube.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/me/Desktop/google/google-code-sample/cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable youtube"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/youtube.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/youtube.dir/build: youtube
.PHONY : CMakeFiles/youtube.dir/build

CMakeFiles/youtube.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/youtube.dir/cmake_clean.cmake
.PHONY : CMakeFiles/youtube.dir/clean

CMakeFiles/youtube.dir/depend:
	cd /Users/me/Desktop/google/google-code-sample/cpp/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/me/Desktop/google/google-code-sample/cpp /Users/me/Desktop/google/google-code-sample/cpp /Users/me/Desktop/google/google-code-sample/cpp/build /Users/me/Desktop/google/google-code-sample/cpp/build /Users/me/Desktop/google/google-code-sample/cpp/build/CMakeFiles/youtube.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/youtube.dir/depend

