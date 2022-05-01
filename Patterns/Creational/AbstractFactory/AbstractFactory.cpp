#include <AbstractFactory.hpp>

#include <string>

ProductA::~ProductA() { }

ProductB::~ProductB() { }

ProductAX::~ProductAX() { }

ProductAX::ProductAX() { }

std::string ProductAX::getProdAName()
{
    return "AX";
}

ProductAY::~ProductAY() { }

ProductAY::ProductAY() { }

std::string ProductAY::getProdAName()
{
    return "AY";
}

ProductBX::~ProductBX() { }

ProductBX::ProductBX() { }

std::string ProductBX::getProdBName()
{
    return "BX";
}

ProductBY::~ProductBY() { }

ProductBY::ProductBY() { }

std::string ProductBY::getProdBName()
{
    return "BY";
}

AbstractFactory::~AbstractFactory() { }

AbstractFactoryX::~AbstractFactoryX() { }

ProductA* AbstractFactoryX::createProductA()
{
    return new ProductAX();
}

ProductB* AbstractFactoryX::createProductB()
{
    return new ProductBX();
}

AbstractFactoryY::~AbstractFactoryY() { }

ProductA* AbstractFactoryY::createProductA()
{
    return new ProductAY();
}

ProductB* AbstractFactoryY::createProductB()
{
    return new ProductBY();
}
