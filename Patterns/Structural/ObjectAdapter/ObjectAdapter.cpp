#include <ObjectAdapter.hpp>

Target::~Target() { }

void Adaptee::irregularSignatureMethod() { }

Adapter::~Adapter()
{
    delete sub;
}

void Adapter::operate()
{
    sub->irregularSignatureMethod();
}
