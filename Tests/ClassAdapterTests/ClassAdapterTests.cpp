#include <ClassAdapter.hpp>
#include <acutest.h>

void works()
{
    TargetInterface* t = new Adapter();
    t->operate();
}

TEST_LIST = {
    { "Adapter works", works },
    { NULL, NULL }
};