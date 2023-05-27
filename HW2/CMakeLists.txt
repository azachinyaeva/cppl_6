cmake_minimum_required (VERSION 3.8)

project ("HW2")

add_executable (HW2 "HW2.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET HW2 PROPERTY CXX_STANDARD 20)
endif()
