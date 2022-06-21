#ifndef MEMENTO_HPP
#define MEMENTO_HPP

#include <vector>

class Memento {
    int state;
    friend class Owner;
    Memento(const int s);
    void setState(const int s);
    int getState();
};

class Owner {
    int state;

public:
    void setState(const int s);
    int getState();
    void setMemento(Memento* const m);
    Memento* createMemento();
};

class Orchestrator {
    Owner* owner;
    std::vector<Memento*> oldMementos;

public:
    Orchestrator(Owner* const own);
    ~Orchestrator();
    void save();
    void undo();
};

#endif // MEMENTO_HPP