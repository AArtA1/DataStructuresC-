# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/c/Users/aslan/CLionProjects/3_Lab_2.0

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Users/aslan/CLionProjects/3_Lab_2.0/cmake-build-debug-wsl

# Include any dependencies generated for this target.
include CMakeFiles/3_Lab_2_0.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/3_Lab_2_0.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/3_Lab_2_0.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/3_Lab_2_0.dir/flags.make

CMakeFiles/3_Lab_2_0.dir/main.cpp.o: CMakeFiles/3_Lab_2_0.dir/flags.make
CMakeFiles/3_Lab_2_0.dir/main.cpp.o: /mnt/c/Users/aslan/CLionProjects/3_Lab_2.0/main.cpp
CMakeFiles/3_Lab_2_0.dir/main.cpp.o: CMakeFiles/3_Lab_2_0.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/aslan/CLionProjects/3_Lab_2.0/cmake-build-debug-wsl/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/3_Lab_2_0.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/3_Lab_2_0.dir/main.cpp.o -MF CMakeFiles/3_Lab_2_0.dir/main.cpp.o.d -o CMakeFiles/3_Lab_2_0.dir/main.cpp.o -c /mnt/c/Users/aslan/CLionProjects/3_Lab_2.0/main.cpp

CMakeFiles/3_Lab_2_0.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/3_Lab_2_0.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/aslan/CLionProjects/3_Lab_2.0/main.cpp > CMakeFiles/3_Lab_2_0.dir/main.cpp.i

CMakeFiles/3_Lab_2_0.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/3_Lab_2_0.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/aslan/CLionProjects/3_Lab_2.0/main.cpp -o CMakeFiles/3_Lab_2_0.dir/main.cpp.s

CMakeFiles/3_Lab_2_0.dir/LN.cpp.o: CMakeFiles/3_Lab_2_0.dir/flags.make
CMakeFiles/3_Lab_2_0.dir/LN.cpp.o: /mnt/c/Users/aslan/CLionProjects/3_Lab_2.0/LN.cpp
CMakeFiles/3_Lab_2_0.dir/LN.cpp.o: CMakeFiles/3_Lab_2_0.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/aslan/CLionProjects/3_Lab_2.0/cmake-build-debug-wsl/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/3_Lab_2_0.dir/LN.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/3_Lab_2_0.dir/LN.cpp.o -MF CMakeFiles/3_Lab_2_0.dir/LN.cpp.o.d -o CMakeFiles/3_Lab_2_0.dir/LN.cpp.o -c /mnt/c/Users/aslan/CLionProjects/3_Lab_2.0/LN.cpp

CMakeFiles/3_Lab_2_0.dir/LN.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/3_Lab_2_0.dir/LN.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/aslan/CLionProjects/3_Lab_2.0/LN.cpp > CMakeFiles/3_Lab_2_0.dir/LN.cpp.i

CMakeFiles/3_Lab_2_0.dir/LN.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/3_Lab_2_0.dir/LN.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/aslan/CLionProjects/3_Lab_2.0/LN.cpp -o CMakeFiles/3_Lab_2_0.dir/LN.cpp.s

# Object files for target 3_Lab_2_0
3_Lab_2_0_OBJECTS = \
"CMakeFiles/3_Lab_2_0.dir/main.cpp.o" \
"CMakeFiles/3_Lab_2_0.dir/LN.cpp.o"

# External object files for target 3_Lab_2_0
3_Lab_2_0_EXTERNAL_OBJECTS =

3_Lab_2_0: CMakeFiles/3_Lab_2_0.dir/main.cpp.o
3_Lab_2_0: CMakeFiles/3_Lab_2_0.dir/LN.cpp.o
3_Lab_2_0: CMakeFiles/3_Lab_2_0.dir/build.make
3_Lab_2_0: CMakeFiles/3_Lab_2_0.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/Users/aslan/CLionProjects/3_Lab_2.0/cmake-build-debug-wsl/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable 3_Lab_2_0"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/3_Lab_2_0.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/3_Lab_2_0.dir/build: 3_Lab_2_0
.PHONY : CMakeFiles/3_Lab_2_0.dir/build

CMakeFiles/3_Lab_2_0.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/3_Lab_2_0.dir/cmake_clean.cmake
.PHONY : CMakeFiles/3_Lab_2_0.dir/clean

CMakeFiles/3_Lab_2_0.dir/depend:
	cd /mnt/c/Users/aslan/CLionProjects/3_Lab_2.0/cmake-build-debug-wsl && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/aslan/CLionProjects/3_Lab_2.0 /mnt/c/Users/aslan/CLionProjects/3_Lab_2.0 /mnt/c/Users/aslan/CLionProjects/3_Lab_2.0/cmake-build-debug-wsl /mnt/c/Users/aslan/CLionProjects/3_Lab_2.0/cmake-build-debug-wsl /mnt/c/Users/aslan/CLionProjects/3_Lab_2.0/cmake-build-debug-wsl/CMakeFiles/3_Lab_2_0.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/3_Lab_2_0.dir/depend
