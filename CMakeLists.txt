cmake_minimum_required(VERSION 3.30)

project(MaquinaEnigma DESCRIPTION "A simple enigma machine implementation" LANGUAGES CXX)

add_executable(${PROJECT_NAME}
    source/main.cpp
    source/engine.cpp
)

target_include_directories(${PROJECT_NAME}
    PUBLIC
    ${PROJECT_SOURCE_DIR}/source
)
