cmake_minimum_required(VERSION 3.21)
project(bibliotheque)

file(GLOB SOURCES "*.cpp")
add_executable(${PROJECT_NAME} ${SOURCES})

# C++17
set_target_properties(${PROJECT_NAME} PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED YES
    CXX_EXTENSIONS NO
)

# Flags de compilation
target_compile_options(${PROJECT_NAME} PRIVATE -Wall -Wextra -Wpedantic)

# Lier stdc++fs si g++ <= 10
if (CMAKE_CXX_COMPILER_VERSION VERSION_LESS 11)
    target_link_libraries(${PROJECT_NAME} PRIVATE stdc++fs)
endif()
