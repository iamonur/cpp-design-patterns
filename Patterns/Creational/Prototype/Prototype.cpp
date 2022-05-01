#include <Prototype.hpp>

Prototype::~Prototype()
{
}

ConcretePrototypeA::~ConcretePrototypeA()
{
}

Prototype* ConcretePrototypeA::Clone()
{
    return new ConcretePrototypeA(state);
}

ConcretePrototypeA::ConcretePrototypeA(std::string in)
    : state(in)
{
}

std::string ConcretePrototypeA::getState()
{
    return state;
}

Prototype* ThatGuy::gimme()
{
    return new ConcretePrototypeA("State A");
}
