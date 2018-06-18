cmake_minimum_required(VERSION 2.8)
project(Tetrics)
set(CMAKE_AUTOMOC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
find_package(Qt5Widgets REQUIRED)
set(sources main.cpp
	MainDialog.cpp
	Data.cpp
	Game.cpp
	GameControl.cpp)
add_executable(${PROJECT_NAME} ${sources})
qt5_use_modules(${PROJECT_NAME} Widgets)
#target_link_libraries(${PROJECT_NAME} Qt::Widgets)
