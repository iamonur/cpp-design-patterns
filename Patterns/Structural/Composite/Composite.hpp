#ifndef COMPOSITE_HPP
#define COMPOSITE_HPP

#include <string>
#include <vector>

class Component {
public:
    virtual std::string traverse() = 0;
};

class Composite : public Component {
    std::vector<Component*> children;

public:
    ~Composite();
    void add(Component* element);
    std::string traverse();
};

class Leaf : public Component {
    std::string myVal;

public:
    Leaf(std::string val);
    std::string traverse();
};

#endif // COMPOSITE_HPP