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
include CMakeFiles/role_test.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/role_test.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/role_test.dir/flags.make

CMakeFiles/role_test.dir/cyber/service_discovery/role/role_test.cc.o: CMakeFiles/role_test.dir/flags.make
CMakeFiles/role_test.dir/cyber/service_discovery/role/role_test.cc.o: ../cyber/service_discovery/role/role_test.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/allen/opensource/apollo_lite/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/role_test.dir/cyber/service_discovery/role/role_test.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/role_test.dir/cyber/service_discovery/role/role_test.cc.o -c /home/allen/opensource/apollo_lite/cyber/service_discovery/role/role_test.cc

CMakeFiles/role_test.dir/cyber/service_discovery/role/role_test.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/role_test.dir/cyber/service_discovery/role/role_test.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/allen/opensource/apollo_lite/cyber/service_discovery/role/role_test.cc > CMakeFiles/role_test.dir/cyber/service_discovery/role/role_test.cc.i

CMakeFiles/role_test.dir/cyber/service_discovery/role/role_test.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/role_test.dir/cyber/service_discovery/role/role_test.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/allen/opensource/apollo_lite/cyber/service_discovery/role/role_test.cc -o CMakeFiles/role_test.dir/cyber/service_discovery/role/role_test.cc.s

# Object files for target role_test
role_test_OBJECTS = \
"CMakeFiles/role_test.dir/cyber/service_discovery/role/role_test.cc.o"

# External object files for target role_test
role_test_EXTERNAL_OBJECTS =

role_test: CMakeFiles/role_test.dir/cyber/service_discovery/role/role_test.cc.o
role_test: CMakeFiles/role_test.dir/build.make
role_test: libcyber.so
role_test: lib/libgtest.a
role_test: lib/libgmock_main.a
role_test: libcyber_proto.so
role_test: /usr/local/lib/libprotobuf.so
role_test: /usr/local/lib/libfastrtps.so.1.5.0
role_test: /usr/lib/x86_64-linux-gnu/libtinyxml2.so
role_test: /usr/local/lib/libfastcdr.so.1.0.7
role_test: /usr/local/lib/libPocoFoundation.so.64
role_test: lib/libgmock.a
role_test: lib/libgtest.a
role_test: CMakeFiles/role_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/allen/opensource/apollo_lite/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable role_test"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/role_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/role_test.dir/build: role_test

.PHONY : CMakeFiles/role_test.dir/build

CMakeFiles/role_test.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/role_test.dir/cmake_clean.cmake
.PHONY : CMakeFiles/role_test.dir/clean

CMakeFiles/role_test.dir/depend:
	cd /home/allen/opensource/apollo_lite/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/allen/opensource/apollo_lite /home/allen/opensource/apollo_lite /home/allen/opensource/apollo_lite/build /home/allen/opensource/apollo_lite/build /home/allen/opensource/apollo_lite/build/CMakeFiles/role_test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/role_test.dir/depend
