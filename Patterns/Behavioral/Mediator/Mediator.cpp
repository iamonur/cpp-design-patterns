#include <Mediator.hpp>

Mediatee::Mediatee(Mediator* const med, const unsigned int id)
    : myMediator(med)
    , myId(id)
{
}

unsigned int Mediatee::getID()
{
    return myId;
}

ConcMediator::~ConcMediator()
{
    for (auto mediatee : mediatees) {
        delete mediatee;
    }
    mediatees.clear();
}

void ConcMediator::add(Mediatee* const med)
{
    mediatees.push_back(med);
}

void ConcMediator::distribute(std::string msg)
{
    // Broadcasts.
    for (auto mediatee : mediatees)
        mediatee->receive(msg);
}

void ConcMediator::distributeAt(unsigned int const target, std::string msg)
{
    if (target >= mediatees.size())
        return;

    mediatees[target]->receive(msg);
}

void ConcMediator::distributeById(unsigned int const target, std::string msg)
{
    for (auto mediatee : mediatees) {
        if (target == mediatee->getID()) {
            mediatee->receive(msg);
            return;
        }
    }
}

ConcMediatee::ConcMediatee(Mediator* const med, const unsigned int i)
    : Mediatee(med, i)
{
}

ConcMediatee::~ConcMediatee() { }

std::string ConcMediatee::send()
{
    return msg;
}

void ConcMediatee::receive(std::string str)
{
    msg = str;
}