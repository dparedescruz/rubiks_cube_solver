project(rubiks_cube_solver)

CMAKE_MINIMUM_REQUIRED(VERSION 3.20)

ADD_EXECUTABLE(run
    src/main.cpp
    src/Cube.cpp
    src/CubeActions.cpp
)