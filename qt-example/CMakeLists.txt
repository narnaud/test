cmake_minimum_required(VERSION 3.16)

project(qt-example VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets)
qt_standard_project_setup()

qt_add_executable(qt-example
    main.cpp
    mainwidget.ui
)

target_link_libraries(qt-example PRIVATE Qt6::Widgets)
