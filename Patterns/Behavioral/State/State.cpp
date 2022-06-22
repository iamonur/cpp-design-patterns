#include <State.hpp>

std::string State_GlobalStr = "";

void ConcStateOne::handle()
{
    State_GlobalStr = "State One";
}

void ConcStateTwo::handle()
{
    State_GlobalStr = "State Two";
}

Ctxt::Ctxt()
    : myState()
{
}

Ctxt::~Ctxt()
{
    if (myState)
        delete myState;
}

void Ctxt::setState(State* const st)
{
    if (myState)
        delete myState;

    myState = st;
}

void Ctxt::handle()
{
    if (myState)
        myState->handle();
}