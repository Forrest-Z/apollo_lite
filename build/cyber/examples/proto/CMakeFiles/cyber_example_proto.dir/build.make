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
include cyber/examples/proto/CMakeFiles/cyber_example_proto.dir/depend.make

# Include the progress variables for this target.
include cyber/examples/proto/CMakeFiles/cyber_example_proto.dir/progress.make

# Include the compile flags for this target's objects.
include cyber/examples/proto/CMakeFiles/cyber_example_proto.dir/flags.make

cyber/examples/proto/examples.pb.cc: ../cyber/examples/proto/examples.proto
cyber/examples/proto/examples.pb.cc: /usr/local/bin/protoc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/allen/opensource/apollo_lite/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Running C++ protocol buffer compiler on /home/allen/opensource/apollo_lite/cyber/examples/proto/examples.proto"
	cd /home/allen/opensource/apollo_lite/build/cyber/examples/proto && /usr/local/bin/protoc --cpp_out=/home/allen/opensource/apollo_lite/build/cyber/examples/proto -I /home/allen/opensource/apollo_lite/cyber/examples/proto /home/allen/opensource/apollo_lite/cyber/examples/proto/examples.proto

cyber/examples/proto/examples.pb.h: cyber/examples/proto/examples.pb.cc
	@$(CMAKE_COMMAND) -E touch_nocreate cyber/examples/proto/examples.pb.h

cyber/examples/proto/CMakeFiles/cyber_example_proto.dir/examples.pb.cc.o: cyber/examples/proto/CMakeFiles/cyber_example_proto.dir/flags.make
cyber/examples/proto/CMakeFiles/cyber_example_proto.dir/examples.pb.cc.o: cyber/examples/proto/examples.pb.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/allen/opensource/apollo_lite/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object cyber/examples/proto/CMakeFiles/cyber_example_proto.dir/examples.pb.cc.o"
	cd /home/allen/opensource/apollo_lite/build/cyber/examples/proto && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cyber_example_proto.dir/examples.pb.cc.o -c /home/allen/opensource/apollo_lite/build/cyber/examples/proto/examples.pb.cc

cyber/examples/proto/CMakeFiles/cyber_example_proto.dir/examples.pb.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cyber_example_proto.dir/examples.pb.cc.i"
	cd /home/allen/opensource/apollo_lite/build/cyber/examples/proto && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/allen/opensource/apollo_lite/build/cyber/examples/proto/examples.pb.cc > CMakeFiles/cyber_example_proto.dir/examples.pb.cc.i

cyber/examples/proto/CMakeFiles/cyber_example_proto.dir/examples.pb.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cyber_example_proto.dir/examples.pb.cc.s"
	cd /home/allen/opensource/apollo_lite/build/cyber/examples/proto && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/allen/opensource/apollo_lite/build/cyber/examples/proto/examples.pb.cc -o CMakeFiles/cyber_example_proto.dir/examples.pb.cc.s

# Object files for target cyber_example_proto
cyber_example_proto_OBJECTS = \
"CMakeFiles/cyber_example_proto.dir/examples.pb.cc.o"

# External object files for target cyber_example_proto
cyber_example_proto_EXTERNAL_OBJECTS =

libcyber_example_proto.so: cyber/examples/proto/CMakeFiles/cyber_example_proto.dir/examples.pb.cc.o
libcyber_example_proto.so: cyber/examples/proto/CMakeFiles/cyber_example_proto.dir/build.make
libcyber_example_proto.so: /usr/local/lib/libprotobuf.so
libcyber_example_proto.so: cyber/examples/proto/CMakeFiles/cyber_example_proto.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/allen/opensource/apollo_lite/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX shared library ../../../libcyber_example_proto.so"
	cd /home/allen/opensource/apollo_lite/build/cyber/examples/proto && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cyber_example_proto.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
cyber/examples/proto/CMakeFiles/cyber_example_proto.dir/build: libcyber_example_proto.so

.PHONY : cyber/examples/proto/CMakeFiles/cyber_example_proto.dir/build

cyber/examples/proto/CMakeFiles/cyber_example_proto.dir/clean:
	cd /home/allen/opensource/apollo_lite/build/cyber/examples/proto && $(CMAKE_COMMAND) -P CMakeFiles/cyber_example_proto.dir/cmake_clean.cmake
.PHONY : cyber/examples/proto/CMakeFiles/cyber_example_proto.dir/clean

cyber/examples/proto/CMakeFiles/cyber_example_proto.dir/depend: cyber/examples/proto/examples.pb.cc
cyber/examples/proto/CMakeFiles/cyber_example_proto.dir/depend: cyber/examples/proto/examples.pb.h
	cd /home/allen/opensource/apollo_lite/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/allen/opensource/apollo_lite /home/allen/opensource/apollo_lite/cyber/examples/proto /home/allen/opensource/apollo_lite/build /home/allen/opensource/apollo_lite/build/cyber/examples/proto /home/allen/opensource/apollo_lite/build/cyber/examples/proto/CMakeFiles/cyber_example_proto.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : cyber/examples/proto/CMakeFiles/cyber_example_proto.dir/depend

