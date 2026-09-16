cmake_minimum_required(VERSION 3.10)

project(TicTacToe)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(tic-tac-toe
    app/main.cpp

    src/Board.cpp
    src/Player.cpp
    src/Game.cpp
)

target_include_directories(tic-tac-toe
    PRIVATE
    ${PROJECT_SOURCE_DIR}/include
)