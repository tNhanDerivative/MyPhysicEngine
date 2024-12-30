project(ClientApp VERSION 0.1)

set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 17)

file(GLOB_RECURSE SRC_FILES ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp CMAKE_CONFIGURE_DEPENDS)
add_executable(${PROJECT_NAME} ${SRC_FILES})

target_include_directories(${PROJECT_NAME} PUBLIC 
                                                ${CMAKE_CURRENT_SOURCE_DIR}/src 
                                                ${CMAKE_SOURCE_DIR}/Core
                                                )
                                                
target_link_libraries(${PROJECT_NAME} PUBLIC Core)
