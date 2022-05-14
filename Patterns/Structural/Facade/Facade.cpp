#include <Facade.hpp>

std::string typeA::opA()
{
    return "A";
}

std::string typeB::opB()
{
    return "B";
}

Facade::Facade()
    : a(new typeA)
    , b(new typeB)
{
}

std::string Facade::operation1()
{
    return a->opA() + b->opB();
}

std::string Facade::operation2()
{
    return a->opA();
}

Facade::~Facade()
{
    delete a;
    delete b;
}