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
include modules/common/vehicle_state/CMakeFiles/common_vehicle_state_provider.dir/depend.make

# Include the progress variables for this target.
include modules/common/vehicle_state/CMakeFiles/common_vehicle_state_provider.dir/progress.make

# Include the compile flags for this target's objects.
include modules/common/vehicle_state/CMakeFiles/common_vehicle_state_provider.dir/flags.make

modules/common/vehicle_state/CMakeFiles/common_vehicle_state_provider.dir/vehicle_state_provider.cc.o: modules/common/vehicle_state/CMakeFiles/common_vehicle_state_provider.dir/flags.make
modules/common/vehicle_state/CMakeFiles/common_vehicle_state_provider.dir/vehicle_state_provider.cc.o: ../modules/common/vehicle_state/vehicle_state_provider.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/allen/opensource/apollo_lite/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object modules/common/vehicle_state/CMakeFiles/common_vehicle_state_provider.dir/vehicle_state_provider.cc.o"
	cd /home/allen/opensource/apollo_lite/build/modules/common/vehicle_state && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/common_vehicle_state_provider.dir/vehicle_state_provider.cc.o -c /home/allen/opensource/apollo_lite/modules/common/vehicle_state/vehicle_state_provider.cc

modules/common/vehicle_state/CMakeFiles/common_vehicle_state_provider.dir/vehicle_state_provider.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/common_vehicle_state_provider.dir/vehicle_state_provider.cc.i"
	cd /home/allen/opensource/apollo_lite/build/modules/common/vehicle_state && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/allen/opensource/apollo_lite/modules/common/vehicle_state/vehicle_state_provider.cc > CMakeFiles/common_vehicle_state_provider.dir/vehicle_state_provider.cc.i

modules/common/vehicle_state/CMakeFiles/common_vehicle_state_provider.dir/vehicle_state_provider.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/common_vehicle_state_provider.dir/vehicle_state_provider.cc.s"
	cd /home/allen/opensource/apollo_lite/build/modules/common/vehicle_state && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/allen/opensource/apollo_lite/modules/common/vehicle_state/vehicle_state_provider.cc -o CMakeFiles/common_vehicle_state_provider.dir/vehicle_state_provider.cc.s

# Object files for target common_vehicle_state_provider
common_vehicle_state_provider_OBJECTS = \
"CMakeFiles/common_vehicle_state_provider.dir/vehicle_state_provider.cc.o"

# External object files for target common_vehicle_state_provider
common_vehicle_state_provider_EXTERNAL_OBJECTS =

libcommon_vehicle_state_provider.a: modules/common/vehicle_state/CMakeFiles/common_vehicle_state_provider.dir/vehicle_state_provider.cc.o
libcommon_vehicle_state_provider.a: modules/common/vehicle_state/CMakeFiles/common_vehicle_state_provider.dir/build.make
libcommon_vehicle_state_provider.a: modules/common/vehicle_state/CMakeFiles/common_vehicle_state_provider.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/allen/opensource/apollo_lite/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library ../../../libcommon_vehicle_state_provider.a"
	cd /home/allen/opensource/apollo_lite/build/modules/common/vehicle_state && $(CMAKE_COMMAND) -P CMakeFiles/common_vehicle_state_provider.dir/cmake_clean_target.cmake
	cd /home/allen/opensource/apollo_lite/build/modules/common/vehicle_state && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/common_vehicle_state_provider.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
modules/common/vehicle_state/CMakeFiles/common_vehicle_state_provider.dir/build: libcommon_vehicle_state_provider.a

.PHONY : modules/common/vehicle_state/CMakeFiles/common_vehicle_state_provider.dir/build

modules/common/vehicle_state/CMakeFiles/common_vehicle_state_provider.dir/clean:
	cd /home/allen/opensource/apollo_lite/build/modules/common/vehicle_state && $(CMAKE_COMMAND) -P CMakeFiles/common_vehicle_state_provider.dir/cmake_clean.cmake
.PHONY : modules/common/vehicle_state/CMakeFiles/common_vehicle_state_provider.dir/clean

modules/common/vehicle_state/CMakeFiles/common_vehicle_state_provider.dir/depend:
	cd /home/allen/opensource/apollo_lite/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/allen/opensource/apollo_lite /home/allen/opensource/apollo_lite/modules/common/vehicle_state /home/allen/opensource/apollo_lite/build /home/allen/opensource/apollo_lite/build/modules/common/vehicle_state /home/allen/opensource/apollo_lite/build/modules/common/vehicle_state/CMakeFiles/common_vehicle_state_provider.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : modules/common/vehicle_state/CMakeFiles/common_vehicle_state_provider.dir/depend

