cmake_minimum_required(VERSION 3.5)
project(Blockchain)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(SOURCES
src/Block.cpp
src/main.cpp
src/blockchain.cpp
src/sha256.cpp
)
add_executable(runme ${SOURCES})
