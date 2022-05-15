#include <Flyweight.hpp>
#include <acutest.h>

void creatingObjects()
{
    auto a = new FWFactory();
    a->getFW(1);
    TEST_ASSERT(true);
    delete a;
}

TEST_LIST = {
    { "Can create flyweight objects", creatingObjects },
    { NULL, NULL }
};