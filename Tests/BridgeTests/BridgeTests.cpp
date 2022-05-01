#include <Bridge.hpp>
#include <acutest.h>

void structureWorks()
{
    BackgroundImplementation* x = new ConcBGImpX;
    BackgroundImplementation* y = new ConcBGImpY;

    Abstraction* a = new RefinedAbstraction(x);
    a->operation();
    delete a;

    a = new RefinedAbstraction(y);
    a->operation();
    delete a;
    delete x;
    delete y;
}

TEST_LIST = {
    { "Structure works without any compilation or runtime errors.", structureWorks },
    { NULL, NULL }
};