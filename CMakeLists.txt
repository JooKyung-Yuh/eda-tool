cmake_minimum_required(VERSION 3.10)
project(eda_tool VERSION 0.1 LANGUAGES CXX)

# C++ 표준 설정
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 빌드 타입 기본값 (Debug or Release)
if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Debug CACHE STRING "" FORCE)
endif()

# 소스 디렉터리 지정
add_subdirectory(src)
