cmake_minimum_required(VERSION 3.23)
project(HTML_editor)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_OSX_ARCHITECTURES x86_64)

set(CMAKE_PREFIX_PATH "/Users/gasoline/Qt5.12.12/5.12.12/clang_64/lib/cmake")

find_package(Qt5 COMPONENTS
        Core
        Gui
        Widgets
        WebView
        WebEngine
        WebEngineWidgets
        REQUIRED)

add_executable(HTML_editor main.cpp)
target_link_libraries(HTML_editor
        Qt5::Core
        Qt5::Gui
        Qt5::Widgets
        Qt5::WebEngineCore
        Qt5::WebEngineWidgets
        )

