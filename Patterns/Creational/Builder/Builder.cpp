#include <Builder.hpp>

void Prod::makeFirst(std::string first)
{
    partOne = first;
}

void Prod::makeSecond(std::string second)
{
    partTwo = second;
}

void Prod::makeThird(std::string third)
{
    partThree = third;
}

std::string Prod::get()
{
    return partOne + " " + partTwo + " " + partThree;
}

Builder::~Builder() { }

Prod Builder::get()
{
    return product;
}

void ConcBuilderX::stepOne()
{
    product.makeFirst("X1");
}

void ConcBuilderX::stepTwo()
{
    product.makeSecond("X2");
}

void ConcBuilderX::stepThree()
{
    product.makeThird("X3");
}

void ConcBuilderY::stepOne()
{
    product.makeFirst("Y1");
}

void ConcBuilderY::stepTwo()
{
    product.makeSecond("Y2");
}

void ConcBuilderY::stepThree()
{
    product.makeThird("Y3");
}

BuildManager::~BuildManager()
{
    if (b)
        delete b;
}

void BuildManager::set(Builder* bldr)
{
    if (b)
        delete b;

    b = bldr;
}

Prod BuildManager::get()
{
    if (!b)
        return Prod();

    return b->get();
}

void BuildManager::construct()
{
    if (!b)
        return;
    b->stepOne();
    b->stepTwo();
    b->stepThree();
}