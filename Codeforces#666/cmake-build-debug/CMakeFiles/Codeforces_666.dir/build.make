# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.14

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.2.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Coding\OnClass\Codeforces#666"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Coding\OnClass\Codeforces#666\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Codeforces_666.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Codeforces_666.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Codeforces_666.dir/flags.make

CMakeFiles/Codeforces_666.dir/main.cpp.obj: CMakeFiles/Codeforces_666.dir/flags.make
CMakeFiles/Codeforces_666.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Coding\OnClass\Codeforces#666\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Codeforces_666.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Codeforces_666.dir\main.cpp.obj -c "C:\Coding\OnClass\Codeforces#666\main.cpp"

CMakeFiles/Codeforces_666.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Codeforces_666.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Coding\OnClass\Codeforces#666\main.cpp" > CMakeFiles\Codeforces_666.dir\main.cpp.i

CMakeFiles/Codeforces_666.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Codeforces_666.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Coding\OnClass\Codeforces#666\main.cpp" -o CMakeFiles\Codeforces_666.dir\main.cpp.s

# Object files for target Codeforces_666
Codeforces_666_OBJECTS = \
"CMakeFiles/Codeforces_666.dir/main.cpp.obj"

# External object files for target Codeforces_666
Codeforces_666_EXTERNAL_OBJECTS =

Codeforces_666.exe: CMakeFiles/Codeforces_666.dir/main.cpp.obj
Codeforces_666.exe: CMakeFiles/Codeforces_666.dir/build.make
Codeforces_666.exe: CMakeFiles/Codeforces_666.dir/linklibs.rsp
Codeforces_666.exe: CMakeFiles/Codeforces_666.dir/objects1.rsp
Codeforces_666.exe: CMakeFiles/Codeforces_666.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Coding\OnClass\Codeforces#666\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Codeforces_666.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Codeforces_666.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Codeforces_666.dir/build: Codeforces_666.exe

.PHONY : CMakeFiles/Codeforces_666.dir/build

CMakeFiles/Codeforces_666.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Codeforces_666.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Codeforces_666.dir/clean

CMakeFiles/Codeforces_666.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Coding\OnClass\Codeforces#666" "C:\Coding\OnClass\Codeforces#666" "C:\Coding\OnClass\Codeforces#666\cmake-build-debug" "C:\Coding\OnClass\Codeforces#666\cmake-build-debug" "C:\Coding\OnClass\Codeforces#666\cmake-build-debug\CMakeFiles\Codeforces_666.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Codeforces_666.dir/depend

