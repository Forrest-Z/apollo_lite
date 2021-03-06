# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = /home/allen/cmake-3.12.2-Linux-x86_64/bin/cmake

# The command to remove a file.
RM = /home/allen/cmake-3.12.2-Linux-x86_64/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/allen/opensource/apollo_lite

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/allen/opensource/apollo_lite/build

# Include any dependencies generated for this target.
include modules/common/math/CMakeFiles/matrix_operations_test.dir/depend.make

# Include the progress variables for this target.
include modules/common/math/CMakeFiles/matrix_operations_test.dir/progress.make

# Include the compile flags for this target's objects.
include modules/common/math/CMakeFiles/matrix_operations_test.dir/flags.make

modules/common/math/CMakeFiles/matrix_operations_test.dir/matrix_operations_test.cc.o: modules/common/math/CMakeFiles/matrix_operations_test.dir/flags.make
modules/common/math/CMakeFiles/matrix_operations_test.dir/matrix_operations_test.cc.o: ../modules/common/math/matrix_operations_test.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/allen/opensource/apollo_lite/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object modules/common/math/CMakeFiles/matrix_operations_test.dir/matrix_operations_test.cc.o"
	cd /home/allen/opensource/apollo_lite/build/modules/common/math && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/matrix_operations_test.dir/matrix_operations_test.cc.o -c /home/allen/opensource/apollo_lite/modules/common/math/matrix_operations_test.cc

modules/common/math/CMakeFiles/matrix_operations_test.dir/matrix_operations_test.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/matrix_operations_test.dir/matrix_operations_test.cc.i"
	cd /home/allen/opensource/apollo_lite/build/modules/common/math && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/allen/opensource/apollo_lite/modules/common/math/matrix_operations_test.cc > CMakeFiles/matrix_operations_test.dir/matrix_operations_test.cc.i

modules/common/math/CMakeFiles/matrix_operations_test.dir/matrix_operations_test.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/matrix_operations_test.dir/matrix_operations_test.cc.s"
	cd /home/allen/opensource/apollo_lite/build/modules/common/math && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/allen/opensource/apollo_lite/modules/common/math/matrix_operations_test.cc -o CMakeFiles/matrix_operations_test.dir/matrix_operations_test.cc.s

# Object files for target matrix_operations_test
matrix_operations_test_OBJECTS = \
"CMakeFiles/matrix_operations_test.dir/matrix_operations_test.cc.o"

# External object files for target matrix_operations_test
matrix_operations_test_EXTERNAL_OBJECTS =

matrix_operations_test: modules/common/math/CMakeFiles/matrix_operations_test.dir/matrix_operations_test.cc.o
matrix_operations_test: modules/common/math/CMakeFiles/matrix_operations_test.dir/build.make
matrix_operations_test: libcommon_qp_solver.a
matrix_operations_test: libcommon_math.a
matrix_operations_test: libcommon_proto.a
matrix_operations_test: libcyber.so
matrix_operations_test: /usr/local/lib/libgflags.so.2.2.2
matrix_operations_test: lib/libgtest.a
matrix_operations_test: lib/libgmock_main.a
matrix_operations_test: libcyber_proto.so
matrix_operations_test: /usr/local/lib/libfastrtps.so.1.5.0
matrix_operations_test: /usr/lib/x86_64-linux-gnu/libtinyxml2.so
matrix_operations_test: /usr/local/lib/libfastcdr.so.1.0.7
matrix_operations_test: /usr/local/lib/libPocoFoundation.so.64
matrix_operations_test: /usr/local/lib/libprotobuf.so
matrix_operations_test: lib/libgmock.a
matrix_operations_test: lib/libgtest.a
matrix_operations_test: modules/common/math/CMakeFiles/matrix_operations_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/allen/opensource/apollo_lite/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../../matrix_operations_test"
	cd /home/allen/opensource/apollo_lite/build/modules/common/math && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/matrix_operations_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
modules/common/math/CMakeFiles/matrix_operations_test.dir/build: matrix_operations_test

.PHONY : modules/common/math/CMakeFiles/matrix_operations_test.dir/build

modules/common/math/CMakeFiles/matrix_operations_test.dir/clean:
	cd /home/allen/opensource/apollo_lite/build/modules/common/math && $(CMAKE_COMMAND) -P CMakeFiles/matrix_operations_test.dir/cmake_clean.cmake
.PHONY : modules/common/math/CMakeFiles/matrix_operations_test.dir/clean

modules/common/math/CMakeFiles/matrix_operations_test.dir/depend:
	cd /home/allen/opensource/apollo_lite/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/allen/opensource/apollo_lite /home/allen/opensource/apollo_lite/modules/common/math /home/allen/opensource/apollo_lite/build /home/allen/opensource/apollo_lite/build/modules/common/math /home/allen/opensource/apollo_lite/build/modules/common/math/CMakeFiles/matrix_operations_test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : modules/common/math/CMakeFiles/matrix_operations_test.dir/depend

