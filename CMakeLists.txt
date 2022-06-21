cmake_minimum_required(VERSION 3.0.0)
project(designPatterns VERSION 0.1.0)

include_directories(.)
include_directories(Patterns/Creational/Singleton)
include_directories(Patterns/Creational/Prototype)
include_directories(Patterns/Creational/FactoryMethod)
include_directories(Patterns/Creational/AbstractFactory)
include_directories(Patterns/Creational/Builder)
include_directories(Patterns/Creational/ObjectPool)
include_directories(Patterns/Structural/ObjectAdapter)
include_directories(Patterns/Structural/ClassAdapter)
include_directories(Patterns/Structural/Bridge)
include_directories(Patterns/Structural/Composite)
include_directories(Patterns/Structural/Decorator)
include_directories(Patterns/Structural/Facade)
include_directories(Patterns/Structural/Flyweight)
include_directories(Patterns/Structural/Proxy)
include_directories(Patterns/Behavioral/ChainOfResponsibility)
include_directories(Patterns/Behavioral/Command)
include_directories(Patterns/Behavioral/Iterator)
include_directories(Patterns/Behavioral/Mediator)
include_directories(Patterns/Behavioral/Memento)
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

AUX_SOURCE_DIRECTORY(Patterns/Structural/ObjectAdapter OBJECT_ADAPTER_FILES)
AUX_SOURCE_DIRECTORY(Tests/ObjectAdapterTests OBJECT_ADAPTER_TESTS)

AUX_SOURCE_DIRECTORY(Patterns/Structural/ClassAdapter CLASS_ADAPTER_FILES)
AUX_SOURCE_DIRECTORY(Tests/ClassAdapterTests CLASS_ADAPTER_TESTS)

AUX_SOURCE_DIRECTORY(Patterns/Structural/Bridge BRIDGE_FILES)
AUX_SOURCE_DIRECTORY(Tests/BridgeTests BRIDGE_TESTS)

AUX_SOURCE_DIRECTORY(Patterns/Structural/Composite COMPOSITE_FILES)
AUX_SOURCE_DIRECTORY(Tests/CompositeTests COMPOSITE_TESTS)

AUX_SOURCE_DIRECTORY(Patterns/Structural/Decorator DECORATOR_FILES)
AUX_SOURCE_DIRECTORY(Tests/DecoratorTests DECORATOR_TESTS)

AUX_SOURCE_DIRECTORY(Patterns/Structural/Facade FACADE_FILES)
AUX_SOURCE_DIRECTORY(Tests/FacadeTests FACADE_TESTS)

AUX_SOURCE_DIRECTORY(Patterns/Structural/Flyweight FLYWEIGHT_FILES)
AUX_SOURCE_DIRECTORY(Tests/FlyweightTests FLYWEIGHT_TESTS)

AUX_SOURCE_DIRECTORY(Patterns/Structural/Proxy PROXY_FILES)
AUX_SOURCE_DIRECTORY(Tests/ProxyTests PROXY_TESTS)

AUX_SOURCE_DIRECTORY(Patterns/Behavioral/ChainOfResponsibility CHAIN_FILES)
AUX_SOURCE_DIRECTORY(Tests/ChainOfResponsibilityTests CHAIN_TESTS)

AUX_SOURCE_DIRECTORY(Patterns/Behavioral/Command COMMAND_FILES)
AUX_SOURCE_DIRECTORY(Tests/CommandTests COMMAND_TESTS)

AUX_SOURCE_DIRECTORY(Patterns/Behavioral/Iterator ITERATOR_FILES)
AUX_SOURCE_DIRECTORY(Tests/IteratorTests ITERATOR_TESTS)

AUX_SOURCE_DIRECTORY(Patterns/Behavioral/Mediator MEDIATOR_FILES)
AUX_SOURCE_DIRECTORY(Tests/MediatorTests MEDIATOR_TESTS)

AUX_SOURCE_DIRECTORY(Patterns/Behavioral/Memento MEMENTO_FILES)
AUX_SOURCE_DIRECTORY(Tests/MementoTests MEMENTO_TESTS)

add_executable(singletonTest ${SINGLETON_TESTS} ${SINGLETON_FILES})
add_executable(prototypeTest ${PROTOTYPE_TESTS} ${PROTOTYPE_FILES})
add_executable(factoryMethodTest ${FACTORY_METHOD_TESTS} ${FACTORY_METHOD_FILES})
add_executable(abstractFactoryTest ${ABSTRACT_FACTORY_FILES} ${ABSTRACT_FACTORY_TESTS})
add_executable(builderTest ${BUILDER_TESTS} ${BUILDER_FILES})
add_executable(objectPoolTest ${OBJECT_POOL_TESTS} ${OBJECT_POOL_FILES})
add_executable(objectAdapterTests ${OBJECT_ADAPTER_TESTS} ${OBJECT_ADAPTER_FILES})
add_executable(classAdapterTests ${CLASS_ADAPTER_TESTS} ${CLASS_ADAPTER_FILES})
add_executable(bridgeTests ${BRIDGE_TESTS} ${BRIDGE_FILES})
add_executable(compositeTests ${COMPOSITE_TESTS} ${COMPOSITE_FILES})
add_executable(decoratorTests ${DECORATOR_TESTS} ${DECORATOR_FILES})
add_executable(facadeTests ${FACADE_TESTS} ${FACADE_FILES})
add_executable(flyweightTests ${FLYWEIGHT_TESTS} ${FLYWEIGHT_FILES})
add_executable(proxyTests ${PROXY_TESTS} ${PROXY_FILES})
add_executable(CoRTests ${CHAIN_TESTS} ${CHAIN_FILES})
add_executable(CommandTests ${COMMAND_TESTS} ${COMMAND_FILES})
add_executable(IteratorTests ${ITERATOR_TESTS} ${ITERATOR_FILES})
add_executable(MediatorTests ${MEDIATOR_TESTS} ${MEDIATOR_FILES})
add_executable(MementoTests ${MEMENTO_TESTS} ${MEMENTO_FILES})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
