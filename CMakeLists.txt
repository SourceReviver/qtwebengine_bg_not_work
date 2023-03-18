cmake_minimum_required(VERSION 3.26)
project(qwebengine_bg_does_not_work)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        WebEngineWidgets
        REQUIRED)

add_executable(qwebengine_bg_does_not_work
        main.cpp
        r.qrc)
target_link_libraries(qwebengine_bg_does_not_work
        Qt::Core
        Qt::Gui
        Qt::Widgets
        Qt::WebEngineWidgets
        )

