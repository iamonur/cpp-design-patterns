#include <State.hpp>
#include <acutest.h>

void works()
{
    Ctxt c = Ctxt();

    c.setState(new ConcStateOne());
    c.handle();

    TEST_ASSERT(State_GlobalStr == "State One");

    c.setState(new ConcStateTwo());
    c.handle();

    TEST_ASSERT(State_GlobalStr == "State Two");
}

TEST_LIST = {
    { "The pattern works as intended", works },
    { NULL, NULL }
};