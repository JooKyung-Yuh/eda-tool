# src/CMakeLists.txt
add_executable(eda-tool
  main.cpp
)

target_include_directories(eda-tool PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
