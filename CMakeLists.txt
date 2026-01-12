cmake_minimum_required(VERSION 4.2)

option(ARHI_BUILD_TESTS "" Off)
option(ARHI_BACKEND_VULKAN "" On)

project(arhi)

set(ARHI_SOURCES
    "Include/arhi.hpp"
    "Include/Backends/IRenderBackend.hpp"
)

set(ARHI_VULKAN_SOURCES
    "Include/Backends/Vulkan/VulkanBackend.hpp"
    "Source/Backends/Vulkan/VulkanBackend.cpp"
)

if(${ARHI_BACKEND_VULKAN})
    find_package(Vulkan REQUIRED)
    set(ARHI_SOURCES ${ARHI_SOURCES} ${ARHI_VULKAN_SOURCES})
endif()

message("${ARHI_SOURCES}")

add_library(arhi ${ARHI_SOURCES})
target_include_directories(arhi PRIVATE Include/)

if(${ARHI_BACKEND_VULKAN}) 
    target_include_directories(arhi PRIVATE ${Vulkan_INCLUDE_DIRS})
    target_link_libraries(arhi PRIVATE ${Vulkan_LIBRARIES})
endif()

if(${ARHI_BUILD_TESTS})
    add_subdirectory(Tests)
endif()
