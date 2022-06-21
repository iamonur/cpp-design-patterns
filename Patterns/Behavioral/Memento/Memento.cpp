#include <Memento.hpp>

Memento::Memento(const int s)
    : state(s)
{
}

void Memento::setState(const int s)
{
    state = s;
}

int Memento::getState()
{
    return state;
}

void Owner::setState(const int s)
{
    state = s;
}

int Owner::getState()
{
    return state;
}

void Owner::setMemento(Memento* const m)
{
    state = m->getState();
}

Memento* Owner::createMemento()
{
    return new Memento(state);
}

Orchestrator::Orchestrator(Owner* const own)
    : owner(own)
{
}

Orchestrator::~Orchestrator()
{
    for (Memento* mem : oldMementos)
        delete mem;

    oldMementos.clear();
}

void Orchestrator::save()
{
    oldMementos.push_back(owner->createMemento());
}

void Orchestrator::undo()
{
    if (oldMementos.empty())
        return;

    auto mem = oldMementos.back();
    owner->setMemento(mem);

    oldMementos.pop_back();
    delete mem;
}