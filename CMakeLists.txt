cmake_minimum_required(VERSION 3.5.1)

project("EOffer")

# 设置安装目录
set(CMAKE_INSTALL_PREFIX /usr/local)

#设置对c++11的支持
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x")

#设置第三方库cmake脚本所在目录
set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")

#设置编译目录
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

#包含源文件
add_subdirectory("source")