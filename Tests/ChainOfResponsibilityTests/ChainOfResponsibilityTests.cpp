#include <ChainOfResponsibility.hpp>
#include <acutest.h>

void works()
{
    Conc1 c1;
    Conc2 c2;

    c1.setHandler(&c2);
    c1.work();

    TEST_ASSERT(true);
}

TEST_LIST = {
    { " ", works },
    { NULL, NULL }
};