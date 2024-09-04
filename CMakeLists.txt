cmake_minimum_required(VERSION 3.30)

project(MaquinaEnigma DESCRIPTION "A simple enigma machine implementation" LANGUAGES CXX)
file(GLOB SOURCES
    source/*.cpp
    source/*.h
)


add_executable(${PROJECT_NAME}
    ${SOURCES}
)
