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
include CMakeFiles/protobuf_factory_test.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/protobuf_factory_test.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/protobuf_factory_test.dir/flags.make

CMakeFiles/protobuf_factory_test.dir/cyber/message/protobuf_factory_test.cc.o: CMakeFiles/protobuf_factory_test.dir/flags.make
CMakeFiles/protobuf_factory_test.dir/cyber/message/protobuf_factory_test.cc.o: ../cyber/message/protobuf_factory_test.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/allen/opensource/apollo_lite/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/protobuf_factory_test.dir/cyber/message/protobuf_factory_test.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/protobuf_factory_test.dir/cyber/message/protobuf_factory_test.cc.o -c /home/allen/opensource/apollo_lite/cyber/message/protobuf_factory_test.cc

CMakeFiles/protobuf_factory_test.dir/cyber/message/protobuf_factory_test.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/protobuf_factory_test.dir/cyber/message/protobuf_factory_test.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/allen/opensource/apollo_lite/cyber/message/protobuf_factory_test.cc > CMakeFiles/protobuf_factory_test.dir/cyber/message/protobuf_factory_test.cc.i

CMakeFiles/protobuf_factory_test.dir/cyber/message/protobuf_factory_test.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/protobuf_factory_test.dir/cyber/message/protobuf_factory_test.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/allen/opensource/apollo_lite/cyber/message/protobuf_factory_test.cc -o CMakeFiles/protobuf_factory_test.dir/cyber/message/protobuf_factory_test.cc.s

# Object files for target protobuf_factory_test
protobuf_factory_test_OBJECTS = \
"CMakeFiles/protobuf_factory_test.dir/cyber/message/protobuf_factory_test.cc.o"

# External object files for target protobuf_factory_test
protobuf_factory_test_EXTERNAL_OBJECTS =

protobuf_factory_test: CMakeFiles/protobuf_factory_test.dir/cyber/message/protobuf_factory_test.cc.o
protobuf_factory_test: CMakeFiles/protobuf_factory_test.dir/build.make
protobuf_factory_test: libcyber.so
protobuf_factory_test: lib/libgtest.a
protobuf_factory_test: lib/libgmock_main.a
protobuf_factory_test: libcyber_proto.so
protobuf_factory_test: /usr/local/lib/libprotobuf.so
protobuf_factory_test: /usr/local/lib/libfastrtps.so.1.5.0
protobuf_factory_test: /usr/lib/x86_64-linux-gnu/libtinyxml2.so
protobuf_factory_test: /usr/local/lib/libfastcdr.so.1.0.7
protobuf_factory_test: /usr/local/lib/libPocoFoundation.so.64
protobuf_factory_test: lib/libgmock.a
protobuf_factory_test: lib/libgtest.a
protobuf_factory_test: CMakeFiles/protobuf_factory_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/allen/opensource/apollo_lite/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable protobuf_factory_test"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/protobuf_factory_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/protobuf_factory_test.dir/build: protobuf_factory_test

.PHONY : CMakeFiles/protobuf_factory_test.dir/build

CMakeFiles/protobuf_factory_test.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/protobuf_factory_test.dir/cmake_clean.cmake
.PHONY : CMakeFiles/protobuf_factory_test.dir/clean

CMakeFiles/protobuf_factory_test.dir/depend:
	cd /home/allen/opensource/apollo_lite/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/allen/opensource/apollo_lite /home/allen/opensource/apollo_lite /home/allen/opensource/apollo_lite/build /home/allen/opensource/apollo_lite/build /home/allen/opensource/apollo_lite/build/CMakeFiles/protobuf_factory_test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/protobuf_factory_test.dir/depend
