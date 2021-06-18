cmake_minimum_required(VERSION 3.17)

add_executable(25_Task_1 main.cpp action.cpp ${My_DIR}/operation.h)
target_include_directories(25_Task_1 PUBLIC ${My_DIR})