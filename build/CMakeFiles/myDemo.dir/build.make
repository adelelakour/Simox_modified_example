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
CMAKE_SOURCE_DIR = /home/adelelakour/SIMOX_SOURCE_2.3.73/simox-v2.3.73/OwnProject/Grasping_own_example

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/adelelakour/SIMOX_SOURCE_2.3.73/simox-v2.3.73/OwnProject/Grasping_own_example/build

# Include any dependencies generated for this target.
include CMakeFiles/myDemo.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/myDemo.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/myDemo.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/myDemo.dir/flags.make

ui_GraspPlanner.h: /home/adelelakour/SIMOX_SOURCE_2.3.73/simox-v2.3.73/OwnProject/Grasping_own_example/GraspPlanner.ui
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/adelelakour/SIMOX_SOURCE_2.3.73/simox-v2.3.73/OwnProject/Grasping_own_example/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating ui_GraspPlanner.h"
	/usr/lib/x86_64-linux-gnu/qt4/bin/uic -o /home/adelelakour/SIMOX_SOURCE_2.3.73/simox-v2.3.73/OwnProject/Grasping_own_example/build/ui_GraspPlanner.h /home/adelelakour/SIMOX_SOURCE_2.3.73/simox-v2.3.73/OwnProject/Grasping_own_example/GraspPlanner.ui

moc_GraspPlannerWindow.cxx: /home/adelelakour/SIMOX_SOURCE_2.3.73/simox-v2.3.73/OwnProject/Grasping_own_example/GraspPlannerWindow.h
moc_GraspPlannerWindow.cxx: moc_GraspPlannerWindow.cxx_parameters
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/adelelakour/SIMOX_SOURCE_2.3.73/simox-v2.3.73/OwnProject/Grasping_own_example/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating moc_GraspPlannerWindow.cxx"
	/usr/lib/x86_64-linux-gnu/qt4/bin/moc @/home/adelelakour/SIMOX_SOURCE_2.3.73/simox-v2.3.73/OwnProject/Grasping_own_example/build/moc_GraspPlannerWindow.cxx_parameters

CMakeFiles/myDemo.dir/GraspPlanner.o: CMakeFiles/myDemo.dir/flags.make
CMakeFiles/myDemo.dir/GraspPlanner.o: /home/adelelakour/SIMOX_SOURCE_2.3.73/simox-v2.3.73/OwnProject/Grasping_own_example/GraspPlanner.cpp
CMakeFiles/myDemo.dir/GraspPlanner.o: CMakeFiles/myDemo.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/adelelakour/SIMOX_SOURCE_2.3.73/simox-v2.3.73/OwnProject/Grasping_own_example/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/myDemo.dir/GraspPlanner.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/myDemo.dir/GraspPlanner.o -MF CMakeFiles/myDemo.dir/GraspPlanner.o.d -o CMakeFiles/myDemo.dir/GraspPlanner.o -c /home/adelelakour/SIMOX_SOURCE_2.3.73/simox-v2.3.73/OwnProject/Grasping_own_example/GraspPlanner.cpp

CMakeFiles/myDemo.dir/GraspPlanner.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myDemo.dir/GraspPlanner.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/adelelakour/SIMOX_SOURCE_2.3.73/simox-v2.3.73/OwnProject/Grasping_own_example/GraspPlanner.cpp > CMakeFiles/myDemo.dir/GraspPlanner.i

CMakeFiles/myDemo.dir/GraspPlanner.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myDemo.dir/GraspPlanner.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/adelelakour/SIMOX_SOURCE_2.3.73/simox-v2.3.73/OwnProject/Grasping_own_example/GraspPlanner.cpp -o CMakeFiles/myDemo.dir/GraspPlanner.s

CMakeFiles/myDemo.dir/GraspPlannerWindow.o: CMakeFiles/myDemo.dir/flags.make
CMakeFiles/myDemo.dir/GraspPlannerWindow.o: /home/adelelakour/SIMOX_SOURCE_2.3.73/simox-v2.3.73/OwnProject/Grasping_own_example/GraspPlannerWindow.cpp
CMakeFiles/myDemo.dir/GraspPlannerWindow.o: CMakeFiles/myDemo.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/adelelakour/SIMOX_SOURCE_2.3.73/simox-v2.3.73/OwnProject/Grasping_own_example/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/myDemo.dir/GraspPlannerWindow.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/myDemo.dir/GraspPlannerWindow.o -MF CMakeFiles/myDemo.dir/GraspPlannerWindow.o.d -o CMakeFiles/myDemo.dir/GraspPlannerWindow.o -c /home/adelelakour/SIMOX_SOURCE_2.3.73/simox-v2.3.73/OwnProject/Grasping_own_example/GraspPlannerWindow.cpp

CMakeFiles/myDemo.dir/GraspPlannerWindow.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myDemo.dir/GraspPlannerWindow.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/adelelakour/SIMOX_SOURCE_2.3.73/simox-v2.3.73/OwnProject/Grasping_own_example/GraspPlannerWindow.cpp > CMakeFiles/myDemo.dir/GraspPlannerWindow.i

CMakeFiles/myDemo.dir/GraspPlannerWindow.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myDemo.dir/GraspPlannerWindow.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/adelelakour/SIMOX_SOURCE_2.3.73/simox-v2.3.73/OwnProject/Grasping_own_example/GraspPlannerWindow.cpp -o CMakeFiles/myDemo.dir/GraspPlannerWindow.s

CMakeFiles/myDemo.dir/moc_GraspPlannerWindow.o: CMakeFiles/myDemo.dir/flags.make
CMakeFiles/myDemo.dir/moc_GraspPlannerWindow.o: moc_GraspPlannerWindow.cxx
CMakeFiles/myDemo.dir/moc_GraspPlannerWindow.o: CMakeFiles/myDemo.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/adelelakour/SIMOX_SOURCE_2.3.73/simox-v2.3.73/OwnProject/Grasping_own_example/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/myDemo.dir/moc_GraspPlannerWindow.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/myDemo.dir/moc_GraspPlannerWindow.o -MF CMakeFiles/myDemo.dir/moc_GraspPlannerWindow.o.d -o CMakeFiles/myDemo.dir/moc_GraspPlannerWindow.o -c /home/adelelakour/SIMOX_SOURCE_2.3.73/simox-v2.3.73/OwnProject/Grasping_own_example/build/moc_GraspPlannerWindow.cxx

CMakeFiles/myDemo.dir/moc_GraspPlannerWindow.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/myDemo.dir/moc_GraspPlannerWindow.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/adelelakour/SIMOX_SOURCE_2.3.73/simox-v2.3.73/OwnProject/Grasping_own_example/build/moc_GraspPlannerWindow.cxx > CMakeFiles/myDemo.dir/moc_GraspPlannerWindow.i

CMakeFiles/myDemo.dir/moc_GraspPlannerWindow.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/myDemo.dir/moc_GraspPlannerWindow.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/adelelakour/SIMOX_SOURCE_2.3.73/simox-v2.3.73/OwnProject/Grasping_own_example/build/moc_GraspPlannerWindow.cxx -o CMakeFiles/myDemo.dir/moc_GraspPlannerWindow.s

# Object files for target myDemo
myDemo_OBJECTS = \
"CMakeFiles/myDemo.dir/GraspPlanner.o" \
"CMakeFiles/myDemo.dir/GraspPlannerWindow.o" \
"CMakeFiles/myDemo.dir/moc_GraspPlannerWindow.o"

# External object files for target myDemo
myDemo_EXTERNAL_OBJECTS =

myDemo: CMakeFiles/myDemo.dir/GraspPlanner.o
myDemo: CMakeFiles/myDemo.dir/GraspPlannerWindow.o
myDemo: CMakeFiles/myDemo.dir/moc_GraspPlannerWindow.o
myDemo: CMakeFiles/myDemo.dir/build.make
myDemo: /usr/lib/x86_64-linux-gnu/libnlopt.so
myDemo: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
myDemo: /usr/lib/x86_64-linux-gnu/libboost_system.so
myDemo: /usr/lib/x86_64-linux-gnu/libboost_program_options.so
myDemo: /usr/lib/x86_64-linux-gnu/libboost_thread.so
myDemo: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
myDemo: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
myDemo: /usr/lib/x86_64-linux-gnu/libboost_atomic.so
myDemo: /usr/lib/x86_64-linux-gnu/libQtOpenGL.so
myDemo: /usr/lib/x86_64-linux-gnu/libQtGui.so
myDemo: /usr/lib/x86_64-linux-gnu/libQtCore.so
myDemo: /usr/lib/x86_64-linux-gnu/libCoin.so
myDemo: /usr/lib/x86_64-linux-gnu/libSoQt.so
myDemo: /usr/lib/x86_64-linux-gnu/libQtOpenGL.so
myDemo: /usr/lib/x86_64-linux-gnu/libQtGui.so
myDemo: /usr/lib/x86_64-linux-gnu/libQtCore.so
myDemo: /usr/lib/libBulletDynamics.so
myDemo: /usr/lib/libBulletSoftBody.so
myDemo: /usr/lib/libBulletCollision.so
myDemo: /usr/lib/libLinearMath.so
myDemo: /usr/lib/libBulletDynamics.so
myDemo: /usr/lib/libBulletSoftBody.so
myDemo: /usr/lib/libBulletCollision.so
myDemo: /usr/lib/libLinearMath.so
myDemo: /usr/lib/x86_64-linux-gnu/libGL.so
myDemo: /usr/lib/x86_64-linux-gnu/libGLU.so
myDemo: /usr/lib/x86_64-linux-gnu/libglut.so
myDemo: /usr/local/lib/libGraspStudio.so
myDemo: /usr/local/lib/libSaba.so
myDemo: /usr/local/lib/libVirtualRobot.so
myDemo: /usr/local/lib/libColCheckerPQP.a
myDemo: /usr/lib/x86_64-linux-gnu/libnlopt.so
myDemo: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
myDemo: /usr/lib/x86_64-linux-gnu/libboost_system.so
myDemo: /usr/lib/x86_64-linux-gnu/libboost_program_options.so
myDemo: /usr/lib/x86_64-linux-gnu/libboost_thread.so
myDemo: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
myDemo: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
myDemo: /usr/lib/x86_64-linux-gnu/libboost_atomic.so
myDemo: /usr/lib/x86_64-linux-gnu/libQtOpenGL.so
myDemo: /usr/lib/x86_64-linux-gnu/libQtGui.so
myDemo: /usr/lib/x86_64-linux-gnu/libQtCore.so
myDemo: /usr/lib/x86_64-linux-gnu/libCoin.so
myDemo: /usr/lib/x86_64-linux-gnu/libSoQt.so
myDemo: /usr/lib/x86_64-linux-gnu/libQtOpenGL.so
myDemo: /usr/lib/x86_64-linux-gnu/libQtGui.so
myDemo: /usr/lib/x86_64-linux-gnu/libQtCore.so
myDemo: /usr/lib/x86_64-linux-gnu/libCoin.so
myDemo: /usr/lib/x86_64-linux-gnu/libSoQt.so
myDemo: /usr/lib/x86_64-linux-gnu/libqhull.so
myDemo: CMakeFiles/myDemo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/adelelakour/SIMOX_SOURCE_2.3.73/simox-v2.3.73/OwnProject/Grasping_own_example/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable myDemo"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/myDemo.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/myDemo.dir/build: myDemo
.PHONY : CMakeFiles/myDemo.dir/build

CMakeFiles/myDemo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/myDemo.dir/cmake_clean.cmake
.PHONY : CMakeFiles/myDemo.dir/clean

CMakeFiles/myDemo.dir/depend: moc_GraspPlannerWindow.cxx
CMakeFiles/myDemo.dir/depend: ui_GraspPlanner.h
	cd /home/adelelakour/SIMOX_SOURCE_2.3.73/simox-v2.3.73/OwnProject/Grasping_own_example/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/adelelakour/SIMOX_SOURCE_2.3.73/simox-v2.3.73/OwnProject/Grasping_own_example /home/adelelakour/SIMOX_SOURCE_2.3.73/simox-v2.3.73/OwnProject/Grasping_own_example /home/adelelakour/SIMOX_SOURCE_2.3.73/simox-v2.3.73/OwnProject/Grasping_own_example/build /home/adelelakour/SIMOX_SOURCE_2.3.73/simox-v2.3.73/OwnProject/Grasping_own_example/build /home/adelelakour/SIMOX_SOURCE_2.3.73/simox-v2.3.73/OwnProject/Grasping_own_example/build/CMakeFiles/myDemo.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/myDemo.dir/depend
