# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /work/ossim/cmake

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /work/build

# Include any dependencies generated for this target.
include ossim-qt4/CMakeFiles/iview.dir/depend.make

# Include the progress variables for this target.
include ossim-qt4/CMakeFiles/iview.dir/progress.make

# Include the compile flags for this target's objects.
include ossim-qt4/CMakeFiles/iview.dir/flags.make

ossim-qt4/qrc_app.cxx: /work/ossim-qt4/images/ImageLinkerSplash.png
ossim-qt4/qrc_app.cxx: /work/ossim-qt4/images/Splash.png
ossim-qt4/qrc_app.cxx: /work/ossim-qt4/images/alignbottom.png
ossim-qt4/qrc_app.cxx: /work/ossim-qt4/images/alignleft.png
ossim-qt4/qrc_app.cxx: /work/ossim-qt4/images/alignright.png
ossim-qt4/qrc_app.cxx: /work/ossim-qt4/images/aligntop.png
ossim-qt4/qrc_app.cxx: /work/ossim-qt4/images/connection.png
ossim-qt4/qrc_app.cxx: /work/ossim-qt4/images/dataextract.png
ossim-qt4/qrc_app.cxx: /work/ossim-qt4/images/datastore.png
ossim-qt4/qrc_app.cxx: /work/ossim-qt4/images/display.png
ossim-qt4/qrc_app.cxx: /work/ossim-qt4/images/editcopy.png
ossim-qt4/qrc_app.cxx: /work/ossim-qt4/images/editcut.png
ossim-qt4/qrc_app.cxx: /work/ossim-qt4/images/editpaste.png
ossim-qt4/qrc_app.cxx: /work/ossim-qt4/images/filenew.png
ossim-qt4/qrc_app.cxx: /work/ossim-qt4/images/fileopen.png
ossim-qt4/qrc_app.cxx: /work/ossim-qt4/images/filesave.png
ossim-qt4/qrc_app.cxx: /work/ossim-qt4/images/fingerup.png
ossim-qt4/qrc_app.cxx: /work/ossim-qt4/images/histogram.png
ossim-qt4/qrc_app.cxx: /work/ossim-qt4/images/iviewsplash.png
ossim-qt4/qrc_app.cxx: /work/ossim-qt4/images/print.png
ossim-qt4/qrc_app.cxx: /work/ossim-qt4/images/redo.png
ossim-qt4/qrc_app.cxx: /work/ossim-qt4/images/resetproperty.png
ossim-qt4/qrc_app.cxx: /work/ossim-qt4/images/searchfind.png
ossim-qt4/qrc_app.cxx: /work/ossim-qt4/images/tilecascade.png
ossim-qt4/qrc_app.cxx: /work/ossim-qt4/images/undo.png
ossim-qt4/qrc_app.cxx: /work/ossim-qt4/images/zoom.png
ossim-qt4/qrc_app.cxx: /work/ossim-qt4/images/pan.png
ossim-qt4/qrc_app.cxx: ossim-qt4/apps/app.qrc.depends
ossim-qt4/qrc_app.cxx: /work/ossim-qt4/apps/app.qrc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/work/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating qrc_app.cxx"
	cd /work/build/ossim-qt4 && /usr/bin/rcc -name app -o /work/build/ossim-qt4/qrc_app.cxx /work/ossim-qt4/apps/app.qrc

ossim-qt4/CMakeFiles/iview.dir/apps/iview/iview.cpp.o: ossim-qt4/CMakeFiles/iview.dir/flags.make
ossim-qt4/CMakeFiles/iview.dir/apps/iview/iview.cpp.o: /work/ossim-qt4/apps/iview/iview.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object ossim-qt4/CMakeFiles/iview.dir/apps/iview/iview.cpp.o"
	cd /work/build/ossim-qt4 && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/iview.dir/apps/iview/iview.cpp.o -c /work/ossim-qt4/apps/iview/iview.cpp

ossim-qt4/CMakeFiles/iview.dir/apps/iview/iview.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/iview.dir/apps/iview/iview.cpp.i"
	cd /work/build/ossim-qt4 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /work/ossim-qt4/apps/iview/iview.cpp > CMakeFiles/iview.dir/apps/iview/iview.cpp.i

ossim-qt4/CMakeFiles/iview.dir/apps/iview/iview.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/iview.dir/apps/iview/iview.cpp.s"
	cd /work/build/ossim-qt4 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /work/ossim-qt4/apps/iview/iview.cpp -o CMakeFiles/iview.dir/apps/iview/iview.cpp.s

ossim-qt4/CMakeFiles/iview.dir/qrc_app.cxx.o: ossim-qt4/CMakeFiles/iview.dir/flags.make
ossim-qt4/CMakeFiles/iview.dir/qrc_app.cxx.o: ossim-qt4/qrc_app.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/work/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object ossim-qt4/CMakeFiles/iview.dir/qrc_app.cxx.o"
	cd /work/build/ossim-qt4 && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/iview.dir/qrc_app.cxx.o -c /work/build/ossim-qt4/qrc_app.cxx

ossim-qt4/CMakeFiles/iview.dir/qrc_app.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/iview.dir/qrc_app.cxx.i"
	cd /work/build/ossim-qt4 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /work/build/ossim-qt4/qrc_app.cxx > CMakeFiles/iview.dir/qrc_app.cxx.i

ossim-qt4/CMakeFiles/iview.dir/qrc_app.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/iview.dir/qrc_app.cxx.s"
	cd /work/build/ossim-qt4 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /work/build/ossim-qt4/qrc_app.cxx -o CMakeFiles/iview.dir/qrc_app.cxx.s

# Object files for target iview
iview_OBJECTS = \
"CMakeFiles/iview.dir/apps/iview/iview.cpp.o" \
"CMakeFiles/iview.dir/qrc_app.cxx.o"

# External object files for target iview
iview_EXTERNAL_OBJECTS =

bin/iview: ossim-qt4/CMakeFiles/iview.dir/apps/iview/iview.cpp.o
bin/iview: ossim-qt4/CMakeFiles/iview.dir/qrc_app.cxx.o
bin/iview: ossim-qt4/CMakeFiles/iview.dir/build.make
bin/iview: lib/libossimQt.so.1.9.0
bin/iview: lib/libossim.so.1.9.0
bin/iview: /usr/lib/x86_64-linux-gnu/libgeos_c.so
bin/iview: /usr/lib/x86_64-linux-gnu/libgeotiff.so
bin/iview: /usr/lib/x86_64-linux-gnu/libdl.so
bin/iview: /usr/lib/x86_64-linux-gnu/libfreetype.so
bin/iview: /usr/lib/x86_64-linux-gnu/libz.so
bin/iview: /usr/lib/x86_64-linux-gnu/libjpeg.so
bin/iview: /usr/lib/x86_64-linux-gnu/libQt3Support.so
bin/iview: /usr/lib/x86_64-linux-gnu/libQtGui.so
bin/iview: /usr/lib/x86_64-linux-gnu/libQtCore.so
bin/iview: /usr/lib/x86_64-linux-gnu/libtiff.so
bin/iview: ossim-qt4/CMakeFiles/iview.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/work/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable ../bin/iview"
	cd /work/build/ossim-qt4 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/iview.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
ossim-qt4/CMakeFiles/iview.dir/build: bin/iview

.PHONY : ossim-qt4/CMakeFiles/iview.dir/build

ossim-qt4/CMakeFiles/iview.dir/clean:
	cd /work/build/ossim-qt4 && $(CMAKE_COMMAND) -P CMakeFiles/iview.dir/cmake_clean.cmake
.PHONY : ossim-qt4/CMakeFiles/iview.dir/clean

ossim-qt4/CMakeFiles/iview.dir/depend: ossim-qt4/qrc_app.cxx
	cd /work/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /work/ossim/cmake /work/ossim-qt4 /work/build /work/build/ossim-qt4 /work/build/ossim-qt4/CMakeFiles/iview.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : ossim-qt4/CMakeFiles/iview.dir/depend

