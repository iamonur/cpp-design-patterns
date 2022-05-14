#ifndef FACADE_HPP
#define FACADE_HPP

#include <string>

class typeA {
public:
    std::string opA();
};

class typeB {
public:
    std::string opB();
};

class Facade {
    typeA* a;
    typeB* b;

public:
    Facade();
    ~Facade();
    std::string operation1();
    std::string operation2();
};

#endif // FACADE_HPP