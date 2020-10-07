PROJECT(ossim-deepcore-plugin)
Message("################## Setting up ossim-deepcore-plugin  #########################")

cmake_minimum_required(VERSION 2.8)

message("OSSIM_DEV_HOME = ${OSSIM_DEV_HOME}")
message("OSSIM_INSTALL_PREFIX = ${OSSIM_INSTALL_PREFIX}")
SET(CMAKE_MODULE_PATH
      ${OSSIM_DEV_HOME}/ossim/cmake/CMakeModules
      ${OSSIM_INSTALL_PREFIX}/share/ossim/CMakeModules
      ${CMAKE_MODULE_PATH})
message("CMAKE_MODULE_PATH = ${CMAKE_MODULE_PATH}")
include(OssimVersion)
include(OssimCommonVariables)
include(OssimUtilities)

get_property(LIB64 GLOBAL PROPERTY FIND_LIBRARY_USE_LIB64_PATHS)
if(LIB64)
   set(LIBSUFFIX 64)
else()
   set(LIBSUFFIX "")
endif()

find_package(ossim)
if( OSSIM_FOUND )
   include_directories( ${OSSIM_INCLUDE_DIR} )
   set( requiredLibs ${requiredLibs} ${OSSIM_LIBRARIES} )
   message( "Found OSSIM" )
else( OSSIM_FOUND )
     message( FATAL "Could not find OSSIM package. " )
endif( OSSIM_FOUND )

# JSONCPP - Required:
find_package( JsonCpp )
if( JSONCPP_FOUND )
   include_directories( ${JSONCPP_INCLUDE_DIR} )
   set( requiredLibs ${requiredLibs} ${JSONCPP_LIBRARY} )
   message("Found JsonCpp: ${JSONCPP_INCLUDE_DIR}" )
else( JSONCPP_FOUND )
   message( FATAL_ERROR "Could not find required JsonCpp package!" )
endif( JSONCPP_FOUND )

set (CMAKE_CXX_STANDARD 11)

message( "requiredLibs = ${requiredLibs}" )

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src)

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/src )

message("################## end of ossim-deepcore-plugin setup #########################")
