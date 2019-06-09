cmake_minimum_required(VERSION 3.7)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CPP_UNIT_TEST_SOURCES
    src/test-case.cpp
    src/test-suite.cpp
    src/asserts.cpp
)

if(NOT DEFINED CMAKE_INSTALL_INCLUDEDIR)
    set(CMAKE_INSTALL_INCLUDEDIR include)
endif(NOT DEFINED CMAKE_INSTALL_INCLUDEDIR)

# installation of json-stream-analyzer CXX library headers
install(DIRECTORY include/cpp-unit-test DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})

set(PUBLIC_HEADERS
    include/cpp-unit-test.h
)

#--------------
# Static library
#--------------

project(cpp-unit-test VERSION 0.0.1 DESCRIPTION "cpp-unit-test")

add_library(${PROJECT_NAME} STATIC ${CPP_UNIT_TEST_SOURCES})

set_target_properties(${PROJECT_NAME} PROPERTIES VERSION ${PROJECT_VERSION})
set_target_properties(${PROJECT_NAME} PROPERTIES SOVERSION 1)
set_target_properties(${PROJECT_NAME} PROPERTIES PUBLIC_HEADER ${PUBLIC_HEADERS})
set_target_properties(${PROJECT_NAME} PROPERTIES OUTPUT_NAME "cpp-unit-test")
set_target_properties(${PROJECT_NAME} PROPERTIES COMPILE_FLAGS -fPIC)

target_include_directories(${PROJECT_NAME} PRIVATE include)
target_include_directories(${PROJECT_NAME} PRIVATE src)

install (TARGETS ${PROJECT_NAME}
    ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    COMPONENT library
)
