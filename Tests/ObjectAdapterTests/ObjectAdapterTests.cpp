#include <ObjectAdapter.hpp>
#include <acutest.h>

void works()
{
    Adapter a;
    a.operate();
}

TEST_LIST = {
    { "Adapter works.", works },
    { NULL, NULL }
};