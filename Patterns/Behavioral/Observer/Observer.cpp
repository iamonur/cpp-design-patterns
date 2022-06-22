#include <Observer.hpp>

ConcObserver::ConcObserver(const int state)
    : observerState(state)
{
}

int ConcObserver::getState()
{
    return observerState;
}

void Observee::attach(Observer* obs)
{
    observers.push_back(obs);
}

void Observee::detach(const unsigned int index)
{
    if (index >= observers.size())
        return;

    observers.erase(observers.begin() + index);
}

void Observee::notify()
{
    for (auto obs : observers)
        obs->update(this);
}

void ConcObserver::update(Observee* observee)
{
    observerState = observee->getState();
}

int ConcObservee::getState()
{
    return myState;
}

void ConcObservee::setState(const int s)
{
    myState = s;
}