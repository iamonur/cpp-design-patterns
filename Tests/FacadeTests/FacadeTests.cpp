#include <Facade.hpp>
#include <acutest.h>

void FacadeOp1()
{
    Facade* f = new Facade;
    TEST_ASSERT(f->operation1() == "AB");
    delete f;
}

void FacadeOp2()
{
    Facade* f = new Facade;
    TEST_ASSERT(f->operation2() == "A");
    delete f;
}

TEST_LIST = {
    { "Facade - Operation 1", FacadeOp1 },
    { "Facade - Operation 2", FacadeOp2 },
    { NULL, NULL }
};