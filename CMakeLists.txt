cmake_minimum_required(VERSION 3.10.3)
project(cpptest)

set(CMAKE_CXX_STANDARD 14)

add_executable(cpptest main.cpp test/test.h test/test.cpp test/for_name.cpp test/for_name.h test/ifSwitch.cpp test/ifSwitch.h test/number/float2.cpp test/number/float2.h)