# Install script for directory: /work/ossim-qt4

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
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libossimQt.so.1.9.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libossimQt.so.1"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/work/build/lib/libossimQt.so.1.9.0"
    "/work/build/lib/libossimQt.so.1"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libossimQt.so.1.9.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libossimQt.so.1"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "/work/build/lib:"
           NEW_RPATH "")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xossimx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libossimQt.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libossimQt.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libossimQt.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/work/build/lib/libossimQt.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libossimQt.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libossimQt.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libossimQt.so"
         OLD_RPATH "/work/build/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libossimQt.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xossim-devx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES
    "/work/ossim-qt4/include/ossimQt/ossimDataManager.h"
    "/work/ossim-qt4/include/ossimQt/ossimQWidgetEditorFactory.h"
    "/work/ossim-qt4/include/ossimQt/ossimQWidgetFactoryInterface.h"
    "/work/ossim-qt4/include/ossimQt/ossimQWidgetFactoryRegistry.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtAboutDialogBase.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtAdjustableParameterDialog.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtAdjustableParameterDialogController.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtAnnotatorBase.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtApplicationUtility.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtBandSelectorController.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtBandSelectorDialog.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtBrightnessContrastDialog.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtCombinerEditorDialog.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtCombinerEditorDialogController.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtDataManagerDialog.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtDataManagerListBox.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtDatumConverterDialog.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtDisplayUtility.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtEditorWidgetManager.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtElevationManagerController.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtElevationManagerDialog.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtEvent.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtEventIds.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtExport.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtGeometryBuilderDialog.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtGeometryBuilderDialogController.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtHistogramBuilderDialog.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtHistogramController.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtHistogramDialog.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtHistogramWidget.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtHsiRemapperController.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtHsiRemapperDialog.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtIcpDialog.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtIgenController.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtIgenDialog.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtImageChainEditorController.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtImageChainEditorDialog.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtImageInfoController.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtImageInfoDialog.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtImageWindow.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtImageWindowController.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtImageWindowControllerEventFilter.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtImagelinkerAboutDialog.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtInformationDialog.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtIviewAboutDialog.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtLayerChooser.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtLayerEditor.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtLayerEditorController.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtMainWindow.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtMainWindowController.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtMainWindowWorkspace.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtMatrixPropertyController.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtMatrixPropertyDialog.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtOverviewBuilderDialog.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtPluginsDialog.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtPositionQualityDialog.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtPreferencesDialog.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtPreferencesDialogController.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtProgressDialog.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtProject.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtPropertyBooleanItem.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtPropertyColorItem.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtPropertyContainerItem.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtPropertyDateItem.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtPropertyDialog.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtPropertyDialogController.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtPropertyFactory.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtPropertyFilenameItem.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtPropertyFontItem.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtPropertyItem.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtPropertyListView.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtPropertyMatrixItem.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtPropertyNumericItem.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtPropertyStringItem.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtPropertyStringListItem.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtPropertyTextItem.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtQuadProjectionController.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtQuadProjectionDialog.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtRLevelFilterDialog.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtRoiAnnotator.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtRoiRectAnnotator.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtScrollImgWidget.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtScrollingImageWidget.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtSingleImageWindow.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtSliderTableItem.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtStaticTileImageCache.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtStringListPropertyController.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtStringListPropertyDialog.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtSwipeScrollingImageWidget.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtTopographicCorrectionDialog.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtTopographicCorrectionDialogController.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtUnitConverterDialog.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtVectorEditorDialog.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtVectorEditorDialogController.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtViewDialog.h"
    "/work/ossim-qt4/include/ossimQt/ossimQtViewDialogController.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xossimx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/imagelinker" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/imagelinker")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/imagelinker"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/work/build/bin/imagelinker")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/imagelinker" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/imagelinker")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/imagelinker"
         OLD_RPATH "/work/build/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/imagelinker")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xossimx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/iview" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/iview")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/iview"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/work/build/bin/iview")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/iview" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/iview")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/iview"
         OLD_RPATH "/work/build/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/iview")
    endif()
  endif()
endif()

