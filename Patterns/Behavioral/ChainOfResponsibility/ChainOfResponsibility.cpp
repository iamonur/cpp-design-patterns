#include <ChainOfResponsibility.hpp>

void Base::setHandler(Base* h)
{
    next = h;
}

void Base::work()
{
    if (next != nullptr)
        next->work();
}

void Conc1::work()
{ // Delegate
    Base::work();
}

void Conc2::work()
{ // Work
    ;
}
