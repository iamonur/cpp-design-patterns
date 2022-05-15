#ifndef CHAIN_HPP
#define CHAIN_HPP
class Base {
    Base* next;

public:
    virtual ~Base() { }
    virtual void setHandler(Base* h);
    virtual void work();
};

class Conc1 : public Base { // A delegating class
public:
    ~Conc1() { }
    virtual void work();
};

class Conc2 : public Base {
public:
    ~Conc2() { }
    virtual void work();
};

#endif // CHAIN_HPP