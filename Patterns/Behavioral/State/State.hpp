#ifndef STATE_HPP
#define STATE_HPP

#include <string>

extern std::string State_GlobalStr;

class State {
public:
    virtual ~State() { }
    virtual void handle() = 0;
};

class Ctxt {
    State* myState;

public:
    Ctxt();
    ~Ctxt();
    void setState(State* const st);
    void handle();
};

class ConcStateOne : public State {
public:
    ~ConcStateOne() { }
    void handle();
};

class ConcStateTwo : public State {
public:
    ~ConcStateTwo() { }
    void handle();
};

#endif // STATE_HPP