project(platform)

file(GLOB platform_src "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp" "${CMAKE_CURRENT_SOURCE_DIR}/*.h")
source_group(platform FILES ${platform_src})

#add_executable(${PROJECT_NAME} ${platform_src})
# 生成动态库
#add_library(${PROJECT_NAME} SHARED ${platform_src})

# 生成静态库
add_library(${PROJECT_NAME} STATIC ${platform_src})

#为windows添加宏
if(CMAKE_SYSTEM_NAME MATCHES "Windows")
	add_definitions(-DPLATFORM_EXPORTS)
endif()

#设置头文件搜索目录
include_directories(
	${CMAKE_SOURCE_DIR}/source/platform
)