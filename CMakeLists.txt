cmake_minimum_required(VERSION 3.0.0)
project(designPatterns VERSION 0.1.0)

include_directories(.)
include_directories(Patterns/Creational/Singleton)
include_directories(Patterns/Creational/Prototype)
include_directories(Patterns/Creational/FactoryMethod)
include_directories(Patterns/Creational/AbstractFactory)
include_directories(Patterns/Creational/Builder)
include_directories(Patterns/Creational/ObjectPool)
include_directories(Common)
include_directories(acutest)

AUX_SOURCE_DIRECTORY(Patterns/Creational/Singleton SINGLETON_FILES)
AUX_SOURCE_DIRECTORY(Tests/SingletonTests SINGLETON_TESTS)

AUX_SOURCE_DIRECTORY(Patterns/Creational/Prototype PROTOTYPE_FILES)
AUX_SOURCE_DIRECTORY(Tests/PrototypeTests PROTOTYPE_TESTS)

AUX_SOURCE_DIRECTORY(Patterns/Creational/FactoryMethod FACTORY_METHOD_FILES)
AUX_SOURCE_DIRECTORY(Tests/FactoryMethodTests FACTORY_METHOD_TESTS)

AUX_SOURCE_DIRECTORY(Patterns/Creational/AbstractFactory ABSTRACT_FACTORY_FILES)
AUX_SOURCE_DIRECTORY(Tests/AbstractFactoryTests ABSTRACT_FACTORY_TESTS)

AUX_SOURCE_DIRECTORY(Patterns/Creational/Builder BUILDER_FILES)
AUX_SOURCE_DIRECTORY(Tests/BuilderTests BUILDER_TESTS)

AUX_SOURCE_DIRECTORY(Patterns/Creational/ObjectPool OBJECT_POOL_FILES)
AUX_SOURCE_DIRECTORY(Tests/ObjectPoolTests OBJECT_POOL_TESTS)

add_executable(singletonTest ${SINGLETON_TESTS} ${SINGLETON_FILES})
add_executable(prototypeTest ${PROTOTYPE_TESTS} ${PROTOTYPE_FILES})
add_executable(factoryMethodTest ${FACTORY_METHOD_TESTS} ${FACTORY_METHOD_FILES})
add_executable(abstractFactoryTest ${ABSTRACT_FACTORY_FILES} ${ABSTRACT_FACTORY_TESTS})
add_executable(builderTest ${BUILDER_TESTS} ${BUILDER_FILES})
add_executable(objectPoolTest ${OBJECT_POOL_TESTS} ${OBJECT_POOL_FILES})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
