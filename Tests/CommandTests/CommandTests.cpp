#include <acutest.h>
#include <Command.hpp>

void noCom() {
    Client c;
    TEST_ASSERT(c.operate(1) == 1);
}

void withCom() {
    Client c;
    ConcCommand a(new Receiver());
    c.setCommand(&a);
    TEST_ASSERT(c.operate(1) == 2);
}

TEST_LIST = {
    {"No command", noCom},
    {"With command", withCom},
    {NULL, NULL}
};