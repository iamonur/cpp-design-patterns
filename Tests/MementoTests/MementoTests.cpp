#include <Memento.hpp>
#include <acutest.h>

void savingWorks()
{
    Owner* own = new Owner();
    Orchestrator* orc = new Orchestrator(own);

    own->setState(42);
    orc->save();

    own->setState(31);
    orc->undo();

    TEST_ASSERT(own->getState() == 42);
}

void undoWorks()
{
    Owner* own = new Owner();
    Orchestrator* orc = new Orchestrator(own);

    own->setState(42);
    orc->save();

    own->setState(31);
    orc->undo();

    TEST_ASSERT(own->getState() == 42);
}

TEST_LIST = {
    { "Memento saving works", savingWorks },
    { "Memento undo works", undoWorks },
    { NULL, NULL }
};