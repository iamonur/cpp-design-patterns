#include <FactoryMethod.hpp>

Prod::~Prod() {

}

std::string ConcProdOne::getName() {
    return "Prod one";
}

ConcProdOne::~ConcProdOne() {

}

std::string ConcProdTwo::getName() {
    return "Prod two";
}

ConcProdTwo::~ConcProdTwo() {

}

FactoryInterface::~FactoryInterface() {

}

Prod* ConcreteCreator::giveProductOne() {
    return new ConcProdOne();
}

Prod* ConcreteCreator::giveProductTwo() {
    return new ConcProdTwo();
}

ConcreteCreator::~ConcreteCreator() {

}