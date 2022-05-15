#ifndef FLYWEIGHT_HPP
#define FLYWEIGHT_HPP

#include <array>

class Flyweight {
public:
    virtual ~Flyweight();
    virtual int getState() = 0;
};

class ConcreteFW : public Flyweight {
    int state;

public:
    int getState();
    ConcreteFW(const int state);
    ~ConcreteFW();
};

class FWFactory {
    std::array<Flyweight*, 100> objects;

public:
    ~FWFactory();

    Flyweight* getFW(unsigned int at);
};

#endif // FLYWEIGHT_HPP