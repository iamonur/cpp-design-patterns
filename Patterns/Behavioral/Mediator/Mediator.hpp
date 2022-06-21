#ifndef MEDIATOR_HPP
#define MEDIATOR_HPP

#include <string>
#include <vector>

class Mediator;

class Mediatee {
protected:
    Mediator* myMediator;
    unsigned int myId;
    std::string msg;

public:
    Mediatee(Mediator* const med, const unsigned int id);
    virtual ~Mediatee() { }
    unsigned int getID();
    virtual std::string send() = 0;
    virtual void receive(std::string str) = 0;
};

class Mediator {
protected:
    Mediator() { }

public:
    virtual ~Mediator() { }
    virtual void add(Mediatee* const med) = 0;
    virtual void distribute(std::string msg) = 0;
    virtual void distributeAt(unsigned int const target, std::string msg) = 0;
    virtual void distributeById(unsigned int const target, std::string msg) = 0;
};

class ConcMediator : public Mediator {
    std::vector<Mediatee*> mediatees;

public:
    ~ConcMediator();
    void add(Mediatee* const med);
    void distribute(std::string msg);
    void distributeAt(unsigned int const target, std::string msg);
    void distributeById(unsigned int const target, std::string msg);
};

class ConcMediatee : public Mediatee {

public:
    ConcMediatee(Mediator* const med, const unsigned int i);
    ~ConcMediatee();
    std::string send();
    void receive(std::string str);
};

#endif // MEDIATOR_HPP