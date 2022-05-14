#ifndef DECORATOR_HPP
#define DECORATOR_HPP

#include <string>

class Base {
public:
    virtual std::string work() = 0;
};

class Component : public Base {
public:
    std::string work();
};

class Decorator : public Base {
    Base* comp;

public:
    Decorator(Base* c);
    virtual std::string work();
};

class ConcDecA : public Decorator {

public:
    ConcDecA(Base* b);
    std::string work();
};

class ConcDecB : public Decorator {

public:
    ConcDecB(Base* b);
    std::string work();
};

#endif // DECORATOR_HPP