#ifndef OBSERVER_HPP
#define OBSERVER_HPP

#include <vector>

class Observee;

class Observer {
public:
    virtual ~Observer() { }
    virtual int getState() = 0;
    virtual void update(Observee* observee) = 0;
};

class Observee {
    std::vector<Observer*> observers;

public:
    virtual ~Observee() { }
    void attach(Observer* obs);
    void detach(const unsigned int index);
    void notify();
    virtual int getState() = 0;
    virtual void setState(const int s) = 0;
};

class ConcObserver : public Observer {
    int observerState;

public:
    ConcObserver(const int state);
    ~ConcObserver() { }
    int getState();
    void update(Observee* observee);
};

class ConcObservee : public Observee {
    int myState;

public:
    ~ConcObservee() { }
    int getState();
    void setState(const int s);
};

#endif // OBSERVER_HPP