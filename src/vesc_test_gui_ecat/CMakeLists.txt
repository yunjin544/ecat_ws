cmake_minimum_required(VERSION 3.5)
project(vesc_test_gui_ecat VERSION 0.1 LANGUAGES CXX)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  std_msgs
)

catkin_package(
# INCLUDE_DIRS include
#  LIBRARIES robot_ecat_master
#  CATKIN_DEPENDS roscpp std_msgs
#  DEPENDS system_lib
)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
include_directories(
		${catkin_INCLUDE_DIRS}
		includes/)


set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

set(PROJECT_SOURCES
        src/main.cpp
        src/mainwindow.cpp
        includes/mainwindow.h
        src/mainwindow.ui
        src/Shared_Memory.cpp
        includes/Shared_Memory.h
        includes/thread.h
        src/thread.cpp
        
)


if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(vesc_test_gui_ecat
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET Hello_World APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(vesc_test_gui_ecat SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(vesc_test_gui_ecat
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(vesc_test_gui_ecat PRIVATE Qt${QT_VERSION_MAJOR}::Widgets ${catkin_LIBRARIES})

set_target_properties(vesc_test_gui_ecat PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

install(TARGETS vesc_test_gui_ecat
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(Hello_World)
endif()
