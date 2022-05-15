#include <Flyweight.hpp>

Flyweight::~Flyweight()
{
}

int ConcreteFW::getState()
{
    return state;
}

ConcreteFW::ConcreteFW(const int state)
    : state(state)
{
}

ConcreteFW::~ConcreteFW()
{
}

FWFactory::~FWFactory()
{
    for (auto a : objects) {
        if (a != nullptr)
            delete a;
    }
}

Flyweight* FWFactory::getFW(unsigned int at)
{
    if (at > 99)
        return nullptr;

    if (objects[at] == nullptr)
        objects[at] = new ConcreteFW(0);

    return objects[at];
}