#include <Composite.hpp>

void Composite::add(Component* element)
{
    children.push_back(element);
}

Composite::~Composite()
{
    for (auto elem : children)
        delete elem;
}

std::string Composite::traverse()
{
    std::string ret = "";

    for (auto elem : children) {
        ret += elem->traverse();
    }

    return ret;
}

Leaf::Leaf(std::string val)
    : myVal(val)
{
}

std::string Leaf::traverse()
{
    return myVal;
}
