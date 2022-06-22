#include <Observer.hpp>
#include <acutest.h>

void patternWorksAsIntended()
{
    ConcObserver obs(31);

    Observee* o = new ConcObservee();
    o->attach(&obs);

    o->setState(42);
    o->notify();

    TEST_ASSERT(obs.getState() == 42);
}

TEST_LIST = {
    { "The pattern works as intended", patternWorksAsIntended },
    { NULL, NULL }
};