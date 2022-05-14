#include <Decorator.hpp>

std::string Component::work()
{
    return "FOO";
}

Decorator::Decorator(Base* c)
    : comp(c)
{
}

std::string Decorator::work()
{
    return comp->work();
}

ConcDecA::ConcDecA(Base* b)
    : Decorator(b)
{
}

std::string ConcDecA::work()
{
    return Decorator::work() + "DecA";
}

ConcDecB::ConcDecB(Base* b)
    : Decorator(b)
{
}

std::string ConcDecB::work()
{
    return Decorator::work() + "DecB";
}
