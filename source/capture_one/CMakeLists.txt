project(capture_one)

file(GLOB capture_one_src "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")

add_executable(${PROJECT_NAME} ${capture_one_src})
#add_library(${PROJECT_NAME} SHARED ${capture_one_src})

#为windows添加宏
if(CMAKE_SYSTEM_NAME MATCHES "Windows")
	add_definitions(-DCAPTUREONE_EXPORTS)
endif()

#设置头文件搜索目录
include_directories(
	${CMAKE_SOURCE_DIR}/source
)