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
include modules/common/adapters/proto/CMakeFiles/adapter_config_proto.dir/depend.make

# Include the progress variables for this target.
include modules/common/adapters/proto/CMakeFiles/adapter_config_proto.dir/progress.make

# Include the compile flags for this target's objects.
include modules/common/adapters/proto/CMakeFiles/adapter_config_proto.dir/flags.make

modules/common/adapters/proto/adapter_config.pb.cc: ../modules/common/adapters/proto/adapter_config.proto
modules/common/adapters/proto/adapter_config.pb.cc: /usr/local/bin/protoc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/allen/opensource/apollo_lite/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Running C++ protocol buffer compiler on adapter_config.proto"
	cd /home/allen/opensource/apollo_lite/build/modules/common/adapters/proto && /usr/local/bin/protoc --cpp_out=/home/allen/opensource/apollo_lite/build/modules/common/adapters/proto -I /home/allen/opensource/apollo_lite/modules/common/adapters/proto /home/allen/opensource/apollo_lite/modules/common/adapters/proto/adapter_config.proto

modules/common/adapters/proto/adapter_config.pb.h: modules/common/adapters/proto/adapter_config.pb.cc
	@$(CMAKE_COMMAND) -E touch_nocreate modules/common/adapters/proto/adapter_config.pb.h

modules/common/adapters/proto/CMakeFiles/adapter_config_proto.dir/adapter_config.pb.cc.o: modules/common/adapters/proto/CMakeFiles/adapter_config_proto.dir/flags.make
modules/common/adapters/proto/CMakeFiles/adapter_config_proto.dir/adapter_config.pb.cc.o: modules/common/adapters/proto/adapter_config.pb.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/allen/opensource/apollo_lite/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object modules/common/adapters/proto/CMakeFiles/adapter_config_proto.dir/adapter_config.pb.cc.o"
	cd /home/allen/opensource/apollo_lite/build/modules/common/adapters/proto && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/adapter_config_proto.dir/adapter_config.pb.cc.o -c /home/allen/opensource/apollo_lite/build/modules/common/adapters/proto/adapter_config.pb.cc

modules/common/adapters/proto/CMakeFiles/adapter_config_proto.dir/adapter_config.pb.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/adapter_config_proto.dir/adapter_config.pb.cc.i"
	cd /home/allen/opensource/apollo_lite/build/modules/common/adapters/proto && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/allen/opensource/apollo_lite/build/modules/common/adapters/proto/adapter_config.pb.cc > CMakeFiles/adapter_config_proto.dir/adapter_config.pb.cc.i

modules/common/adapters/proto/CMakeFiles/adapter_config_proto.dir/adapter_config.pb.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/adapter_config_proto.dir/adapter_config.pb.cc.s"
	cd /home/allen/opensource/apollo_lite/build/modules/common/adapters/proto && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/allen/opensource/apollo_lite/build/modules/common/adapters/proto/adapter_config.pb.cc -o CMakeFiles/adapter_config_proto.dir/adapter_config.pb.cc.s

# Object files for target adapter_config_proto
adapter_config_proto_OBJECTS = \
"CMakeFiles/adapter_config_proto.dir/adapter_config.pb.cc.o"

# External object files for target adapter_config_proto
adapter_config_proto_EXTERNAL_OBJECTS =

libadapter_config_proto.a: modules/common/adapters/proto/CMakeFiles/adapter_config_proto.dir/adapter_config.pb.cc.o
libadapter_config_proto.a: modules/common/adapters/proto/CMakeFiles/adapter_config_proto.dir/build.make
libadapter_config_proto.a: modules/common/adapters/proto/CMakeFiles/adapter_config_proto.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/allen/opensource/apollo_lite/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX static library ../../../../libadapter_config_proto.a"
	cd /home/allen/opensource/apollo_lite/build/modules/common/adapters/proto && $(CMAKE_COMMAND) -P CMakeFiles/adapter_config_proto.dir/cmake_clean_target.cmake
	cd /home/allen/opensource/apollo_lite/build/modules/common/adapters/proto && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/adapter_config_proto.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
modules/common/adapters/proto/CMakeFiles/adapter_config_proto.dir/build: libadapter_config_proto.a

.PHONY : modules/common/adapters/proto/CMakeFiles/adapter_config_proto.dir/build

modules/common/adapters/proto/CMakeFiles/adapter_config_proto.dir/clean:
	cd /home/allen/opensource/apollo_lite/build/modules/common/adapters/proto && $(CMAKE_COMMAND) -P CMakeFiles/adapter_config_proto.dir/cmake_clean.cmake
.PHONY : modules/common/adapters/proto/CMakeFiles/adapter_config_proto.dir/clean

modules/common/adapters/proto/CMakeFiles/adapter_config_proto.dir/depend: modules/common/adapters/proto/adapter_config.pb.cc
modules/common/adapters/proto/CMakeFiles/adapter_config_proto.dir/depend: modules/common/adapters/proto/adapter_config.pb.h
	cd /home/allen/opensource/apollo_lite/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/allen/opensource/apollo_lite /home/allen/opensource/apollo_lite/modules/common/adapters/proto /home/allen/opensource/apollo_lite/build /home/allen/opensource/apollo_lite/build/modules/common/adapters/proto /home/allen/opensource/apollo_lite/build/modules/common/adapters/proto/CMakeFiles/adapter_config_proto.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : modules/common/adapters/proto/CMakeFiles/adapter_config_proto.dir/depend
