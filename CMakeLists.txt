cmake_minimum_required(VERSION 3.25)
project(2023-cpl-coding C)

set(CMAKE_C_STANDARD 17)

# gcc hello.c -o hello
ADD_EXECUTABLE(helllo hello.c)
add_executable(guess-number guess-number.c)