cmake_minimum_required(VERSION 3.0.0)
project(designPatterns VERSION 0.1.0)

include_directories(.)
include_directories(Patterns/Creational/Singleton)
include_directories(Tests)
include_directories(Common)

AUX_SOURCE_DIRECTORY(Patterns/Creational/Singleton SINGLETON_FILES)
AUX_SOURCE_DIRECTORY(Tests/SingletonTests SINGLETON_TESTS)

add_executable(singletonTest ${SINGLETON_TESTS} ${SINGLETON_FILES})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
