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
include modules/common/configs/CMakeFiles/common_config_gflags.dir/depend.make

# Include the progress variables for this target.
include modules/common/configs/CMakeFiles/common_config_gflags.dir/progress.make

# Include the compile flags for this target's objects.
include modules/common/configs/CMakeFiles/common_config_gflags.dir/flags.make

modules/common/configs/CMakeFiles/common_config_gflags.dir/config_gflags.cc.o: modules/common/configs/CMakeFiles/common_config_gflags.dir/flags.make
modules/common/configs/CMakeFiles/common_config_gflags.dir/config_gflags.cc.o: ../modules/common/configs/config_gflags.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/allen/opensource/apollo_lite/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object modules/common/configs/CMakeFiles/common_config_gflags.dir/config_gflags.cc.o"
	cd /home/allen/opensource/apollo_lite/build/modules/common/configs && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/common_config_gflags.dir/config_gflags.cc.o -c /home/allen/opensource/apollo_lite/modules/common/configs/config_gflags.cc

modules/common/configs/CMakeFiles/common_config_gflags.dir/config_gflags.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/common_config_gflags.dir/config_gflags.cc.i"
	cd /home/allen/opensource/apollo_lite/build/modules/common/configs && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/allen/opensource/apollo_lite/modules/common/configs/config_gflags.cc > CMakeFiles/common_config_gflags.dir/config_gflags.cc.i

modules/common/configs/CMakeFiles/common_config_gflags.dir/config_gflags.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/common_config_gflags.dir/config_gflags.cc.s"
	cd /home/allen/opensource/apollo_lite/build/modules/common/configs && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/allen/opensource/apollo_lite/modules/common/configs/config_gflags.cc -o CMakeFiles/common_config_gflags.dir/config_gflags.cc.s

# Object files for target common_config_gflags
common_config_gflags_OBJECTS = \
"CMakeFiles/common_config_gflags.dir/config_gflags.cc.o"

# External object files for target common_config_gflags
common_config_gflags_EXTERNAL_OBJECTS =

libcommon_config_gflags.a: modules/common/configs/CMakeFiles/common_config_gflags.dir/config_gflags.cc.o
libcommon_config_gflags.a: modules/common/configs/CMakeFiles/common_config_gflags.dir/build.make
libcommon_config_gflags.a: modules/common/configs/CMakeFiles/common_config_gflags.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/allen/opensource/apollo_lite/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library ../../../libcommon_config_gflags.a"
	cd /home/allen/opensource/apollo_lite/build/modules/common/configs && $(CMAKE_COMMAND) -P CMakeFiles/common_config_gflags.dir/cmake_clean_target.cmake
	cd /home/allen/opensource/apollo_lite/build/modules/common/configs && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/common_config_gflags.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
modules/common/configs/CMakeFiles/common_config_gflags.dir/build: libcommon_config_gflags.a

.PHONY : modules/common/configs/CMakeFiles/common_config_gflags.dir/build

modules/common/configs/CMakeFiles/common_config_gflags.dir/clean:
	cd /home/allen/opensource/apollo_lite/build/modules/common/configs && $(CMAKE_COMMAND) -P CMakeFiles/common_config_gflags.dir/cmake_clean.cmake
.PHONY : modules/common/configs/CMakeFiles/common_config_gflags.dir/clean

modules/common/configs/CMakeFiles/common_config_gflags.dir/depend:
	cd /home/allen/opensource/apollo_lite/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/allen/opensource/apollo_lite /home/allen/opensource/apollo_lite/modules/common/configs /home/allen/opensource/apollo_lite/build /home/allen/opensource/apollo_lite/build/modules/common/configs /home/allen/opensource/apollo_lite/build/modules/common/configs/CMakeFiles/common_config_gflags.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : modules/common/configs/CMakeFiles/common_config_gflags.dir/depend

