cmake_minimum_required(VERSION 3.23)
project(DEAssignment)

set(CMAKE_CXX_STANDARD 14)

add_executable(q1-1 main-1-1.cpp Employee.cpp Employee.h)
add_executable(q2-1 main-2-1.cpp Employee.cpp Employee.h Casual.cpp Casual.h)
add_executable(q2-2 main-2-2.cpp Employee.cpp Employee.h Manager.cpp Manager.h)
add_executable(q3-1 main-3-1.cpp Shop.cpp Shop.h)
