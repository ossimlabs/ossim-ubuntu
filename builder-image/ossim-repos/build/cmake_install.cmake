# Install script for directory: /work/ossim/cmake

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xossimx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ossim/geoids" TYPE FILE FILES "/work/ossim/share/ossim/geoids/egm96.grd")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xossimx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ossim/CMakeModules" TYPE FILE FILES
    "/work/ossim/cmake/CMakeModules/CMakeParseArguments.cmake"
    "/work/ossim/cmake/CMakeModules/FindAWS.cmake"
    "/work/ossim/cmake/CMakeModules/FindCPPUNIT.cmake"
    "/work/ossim/cmake/CMakeModules/FindCsmApi.cmake"
    "/work/ossim/cmake/CMakeModules/FindFFTW3.cmake"
    "/work/ossim/cmake/CMakeModules/FindFFmpeg.cmake"
    "/work/ossim/cmake/CMakeModules/FindFreetype.cmake"
    "/work/ossim/cmake/CMakeModules/FindGEOS.cmake"
    "/work/ossim/cmake/CMakeModules/FindGEOTIFF.cmake"
    "/work/ossim/cmake/CMakeModules/FindGPSTK.cmake"
    "/work/ossim/cmake/CMakeModules/FindGeotrans.cmake"
    "/work/ossim/cmake/CMakeModules/FindGit.cmake"
    "/work/ossim/cmake/CMakeModules/FindHDF5.cmake"
    "/work/ossim/cmake/CMakeModules/FindHDF5A.cmake"
    "/work/ossim/cmake/CMakeModules/FindJPEG.cmake"
    "/work/ossim/cmake/CMakeModules/FindJPEG12.cmake"
    "/work/ossim/cmake/CMakeModules/FindJsonCpp.cmake"
    "/work/ossim/cmake/CMakeModules/FindLASzip.cmake"
    "/work/ossim/cmake/CMakeModules/FindLIBLAS.cmake"
    "/work/ossim/cmake/CMakeModules/FindMSP.cmake"
    "/work/ossim/cmake/CMakeModules/FindMiniZip.cmake"
    "/work/ossim/cmake/CMakeModules/FindMrSid.cmake"
    "/work/ossim/cmake/CMakeModules/FindOMS.cmake"
    "/work/ossim/cmake/CMakeModules/FindOSG.cmake"
    "/work/ossim/cmake/CMakeModules/FindOpenCV.cmake"
    "/work/ossim/cmake/CMakeModules/FindOpenJPEG.cmake"
    "/work/ossim/cmake/CMakeModules/FindOssimVideo.cmake"
    "/work/ossim/cmake/CMakeModules/FindOssimWMS.cmake"
    "/work/ossim/cmake/CMakeModules/FindPDAL.cmake"
    "/work/ossim/cmake/CMakeModules/FindPackageHandleStandardArgs.cmake"
    "/work/ossim/cmake/CMakeModules/FindPackageMessage.cmake"
    "/work/ossim/cmake/CMakeModules/FindPodofo.cmake"
    "/work/ossim/cmake/CMakeModules/FindPostgreSQL.cmake"
    "/work/ossim/cmake/CMakeModules/FindPotrace.cmake"
    "/work/ossim/cmake/CMakeModules/FindQt5.cmake"
    "/work/ossim/cmake/CMakeModules/FindRapier.cmake"
    "/work/ossim/cmake/CMakeModules/FindRegex.cmake"
    "/work/ossim/cmake/CMakeModules/FindSQLITE.cmake"
    "/work/ossim/cmake/CMakeModules/FindStlPort.cmake"
    "/work/ossim/cmake/CMakeModules/FindSubversion.cmake"
    "/work/ossim/cmake/CMakeModules/FindTIFF.cmake"
    "/work/ossim/cmake/CMakeModules/Findossim.cmake"
    "/work/ossim/cmake/CMakeModules/FindossimPlanet.cmake"
    "/work/ossim/cmake/CMakeModules/OssimCPack.cmake"
    "/work/ossim/cmake/CMakeModules/OssimCPackConfig.cmake.in"
    "/work/ossim/cmake/CMakeModules/OssimCommonVariables.cmake"
    "/work/ossim/cmake/CMakeModules/OssimDetermineCompiler.cmake"
    "/work/ossim/cmake/CMakeModules/OssimQt4Macros.cmake"
    "/work/ossim/cmake/CMakeModules/OssimQt5Macros.cmake"
    "/work/ossim/cmake/CMakeModules/OssimUtilities.cmake"
    "/work/ossim/cmake/CMakeModules/OssimVersion.cmake"
    "/work/ossim/cmake/CMakeModules/Qt5Macros.cmake"
    "/work/ossim/cmake/CMakeModules/cmake_uninstall.cmake.in"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xossimx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ossim/projection" TYPE FILE FILES
    "/work/ossim/share/ossim/projection/ossim_epsg_projections-v7_4.csv"
    "/work/ossim/share/ossim/projection/ossim_harn_state_plane_epsg.csv"
    "/work/ossim/share/ossim/projection/ossim_harn_state_plane_esri.csv"
    "/work/ossim/share/ossim/projection/ossim_state_plane_readme.txt"
    "/work/ossim/share/ossim/projection/ossim_state_plane_spcs.csv"
    "/work/ossim/share/ossim/projection/ossim_wkt_pcs.csv"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xossimx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ossim" TYPE FILE RENAME "ossim-preferences-template" FILES "/work/ossim/share/ossim/templates/ossim_preferences_template")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xossimx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/work/build/packaging/pkgconfig/ossim.pc")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/work/build/ossim/cmake_install.cmake")
  include("/work/build/ossim-video/cmake_install.cmake")
  include("/work/build/ossim-oms/cmake_install.cmake")
  include("/work/build/ossim-qt4/cmake_install.cmake")
  include("/work/build/ossim-plugins/cmake_install.cmake")
  include("/work/build/ossim-deepcore/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/work/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
