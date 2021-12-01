cmake_minimum_required(VERSION 3.20)
project(examank05)

set(CMAKE_CXX_STANDARD 98)

add_executable(examank05 cpp_module01/main.cpp cpp_module01/Warlock.cpp cpp_module01/Warlock.hpp cpp_module01/ASpell.cpp cpp_module01/ASpell.hpp cpp_module01/ATarget.cpp cpp_module01/ATarget.hpp cpp_module01/Fwoosh.cpp cpp_module01/Fwoosh.hpp cpp_module01/Dummy.cpp cpp_module01/Dummy.hpp)
