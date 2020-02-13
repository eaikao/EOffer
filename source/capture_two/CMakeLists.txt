project(capture_two)

file(GLOB capture_two_src "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp" "${CMAKE_CURRENT_SOURCE_DIR}/*.h")
source_group(capture_two FILES ${capture_two_src})

add_executable(${PROJECT_NAME} ${capture_two_src})
#add_library(${PROJECT_NAME} SHARED ${capture_two_src})

#为windows添加宏
if(CMAKE_SYSTEM_NAME MATCHES "Windows")
	add_definitions(-DCAPTURETWO_EXPORTS)
endif()

#添加工程内引用
target_link_libraries(${PROJECT_NAME} platform)

#设置头文件搜索目录
include_directories(
	${CMAKE_SOURCE_DIR}/source/capture_two
	${CMAKE_SOURCE_DIR}/source/platform
)