cmake_minimum_required(VERSION 3.16)

project(VaREX VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Etsitään Qt, ensin Qt6 tai Qt5:
find_package(QT NAMES Qt6 REQUIRED COMPONENTS Core Gui Widgets Multimedia)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core Gui Widgets Multimedia)

# Lähdekoodit yhteen listaan
set(PROJECT_SOURCES
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
)

# Jos käytössä on Qt6, käytetään qt_add_executable:
if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(VaREX
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )
else()
    # Qt5 / vanhemmat
    if(ANDROID)
        add_library(VaREX SHARED ${PROJECT_SOURCES})
    else()
        add_executable(VaREX ${PROJECT_SOURCES})
    endif()
endif()

target_link_libraries(VaREX
    PRIVATE
    Qt${QT_VERSION_MAJOR}::Core
    Qt${QT_VERSION_MAJOR}::Gui
    Qt${QT_VERSION_MAJOR}::Widgets
    Qt${QT_VERSION_MAJOR}::Multimedia
)

# Asetetaan properties
set_target_properties(VaREX PROPERTIES
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

# Qt6:n finalize
if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(VaREX)
endif()
