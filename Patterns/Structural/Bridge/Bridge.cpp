#include <Bridge.hpp>

BackgroundImplementation::~BackgroundImplementation() { }

ConcBGImpX::~ConcBGImpX() { }

void ConcBGImpX::action() { }

ConcBGImpY::~ConcBGImpY() { }

void ConcBGImpY::action() { }

Abstraction::~Abstraction() { }

RefinedAbstraction::~RefinedAbstraction() { }

RefinedAbstraction::RefinedAbstraction(BackgroundImplementation* impl)
    : implementor(impl)
{
}

void RefinedAbstraction::operation()
{
    implementor->action();
}