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
include CMakeFiles/part3_test.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/part3_test.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/part3_test.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/part3_test.dir/flags.make

CMakeFiles/part3_test.dir/test/part3_test.cpp.o: CMakeFiles/part3_test.dir/flags.make
CMakeFiles/part3_test.dir/test/part3_test.cpp.o: ../test/part3_test.cpp
CMakeFiles/part3_test.dir/test/part3_test.cpp.o: CMakeFiles/part3_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/me/Desktop/google/google-code-sample/cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/part3_test.dir/test/part3_test.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/part3_test.dir/test/part3_test.cpp.o -MF CMakeFiles/part3_test.dir/test/part3_test.cpp.o.d -o CMakeFiles/part3_test.dir/test/part3_test.cpp.o -c /Users/me/Desktop/google/google-code-sample/cpp/test/part3_test.cpp

CMakeFiles/part3_test.dir/test/part3_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/part3_test.dir/test/part3_test.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/me/Desktop/google/google-code-sample/cpp/test/part3_test.cpp > CMakeFiles/part3_test.dir/test/part3_test.cpp.i

CMakeFiles/part3_test.dir/test/part3_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/part3_test.dir/test/part3_test.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/me/Desktop/google/google-code-sample/cpp/test/part3_test.cpp -o CMakeFiles/part3_test.dir/test/part3_test.cpp.s

# Object files for target part3_test
part3_test_OBJECTS = \
"CMakeFiles/part3_test.dir/test/part3_test.cpp.o"

# External object files for target part3_test
part3_test_EXTERNAL_OBJECTS =

part3_test: CMakeFiles/part3_test.dir/test/part3_test.cpp.o
part3_test: CMakeFiles/part3_test.dir/build.make
part3_test: libyoutube_lib.a
part3_test: lib/libgmock.a
part3_test: lib/libgtest.a
part3_test: lib/libgtest_main.a
part3_test: lib/libgtest.a
part3_test: CMakeFiles/part3_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/me/Desktop/google/google-code-sample/cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable part3_test"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/part3_test.dir/link.txt --verbose=$(VERBOSE)
	/Applications/CMake.app/Contents/bin/cmake -D TEST_TARGET=part3_test -D TEST_EXECUTABLE=/Users/me/Desktop/google/google-code-sample/cpp/build/part3_test -D TEST_EXECUTOR= -D TEST_WORKING_DIR=/Users/me/Desktop/google/google-code-sample/cpp/build -D TEST_EXTRA_ARGS= -D TEST_PROPERTIES= -D TEST_PREFIX= -D TEST_SUFFIX= -D NO_PRETTY_TYPES=FALSE -D NO_PRETTY_VALUES=FALSE -D TEST_LIST=part3_test_TESTS -D CTEST_FILE=/Users/me/Desktop/google/google-code-sample/cpp/build/part3_test[1]_tests.cmake -D TEST_DISCOVERY_TIMEOUT=5 -D TEST_XML_OUTPUT_DIR= -P /Applications/CMake.app/Contents/share/cmake-3.21/Modules/GoogleTestAddTests.cmake

# Rule to build all files generated by this target.
CMakeFiles/part3_test.dir/build: part3_test
.PHONY : CMakeFiles/part3_test.dir/build

CMakeFiles/part3_test.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/part3_test.dir/cmake_clean.cmake
.PHONY : CMakeFiles/part3_test.dir/clean

CMakeFiles/part3_test.dir/depend:
	cd /Users/me/Desktop/google/google-code-sample/cpp/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/me/Desktop/google/google-code-sample/cpp /Users/me/Desktop/google/google-code-sample/cpp /Users/me/Desktop/google/google-code-sample/cpp/build /Users/me/Desktop/google/google-code-sample/cpp/build /Users/me/Desktop/google/google-code-sample/cpp/build/CMakeFiles/part3_test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/part3_test.dir/depend

