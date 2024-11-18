cmake_minimum_required(VERSION 3.10)
project(TemaBook)

# Setăm standardul C++
set(CMAKE_CXX_STANDARD 17)

# Adăugăm fișierele sursă
include_directories(include)
add_executable(Tema
    src/Book.cpp
    src/main.cpp
)
