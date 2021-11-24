cmake_minimum_required(VERSION 3.5)
project(main)

set(CXX_STANDARD 11)
set(CXX_STANDARD_REQUIRED ON)

include_directories(${SOURCE_DIR} /usr/include/mysql /usr/include/mysql++)

add_executable(${PROJECT_NAME}
 "main.cpp"
)

target_link_libraries(${PROJECT_NAME} PRIVATE mysqlpp mysqlclient pthread)

