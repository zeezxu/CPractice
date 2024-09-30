cmake_minimum_required(VERSION 3.29)
project(CLionPractice C)

set(CMAKE_C_STANDARD 99)

add_executable(CLionPractice main.c
        Chapter05/02_PointerTest.c
        Chapter05/01_PointerTest.c
        Chapter05/03_PointerTest.c
        Projects/ATMTest.c
        Chapter05/04_DoublePointerTest.c
        Chapter05/05_DoublePointerTest.c)



add_executable(01_PointerTest Chapter05/01_PointerTest.c)
add_executable(02_PointerTest Chapter05/02_PointerTest.c)
add_executable(03_PointerTest Chapter05/03_PointerTest.c)
add_executable(ATMTest Projects/ATMTest.c)
add_executable(04_PointerTest Chapter05/04_DoublePointerTest.c)
add_executable(04_DoublePointerTest Chapter05/04_DoublePointerTest.c)
add_executable(05_DoublePointerTest Chapter05/05_DoublePointerTest.c)