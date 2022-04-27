cmake_minimum_required(VERSION 3.5)

project(minimum_example_libtorch LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#set(Torch_DIR "${CMAKE_CURRENT_LIST_DIR}/libtorch_cpu/share/cmake/Torch")
set(Torch_DIR "${CMAKE_CURRENT_LIST_DIR}/libtorch_1.6.0_cu102/share/cmake/Torch")

find_package(Torch REQUIRED)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${TORCH_CXX_FLAGS}")

add_executable(minimum_example_libtorch main.cpp)
target_link_libraries(minimum_example_libtorch ${TORCH_LIBRARIES})
