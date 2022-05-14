#include <Decorator.hpp>
#include <acutest.h>

void DecATest()
{
    Component* c = new Component();
    ConcDecA* dec = new ConcDecA(c);

    TEST_ASSERT(dec->work() == "FOODecA");

    delete c;
    delete dec;
}

void DecABTest()
{
    Component* c = new Component();
    ConcDecA* dec = new ConcDecA(c);
    ConcDecB* dectwo = new ConcDecB(dec);

    TEST_ASSERT(dectwo->work() == "FOODecADecB");

    delete c;
    delete dec;
    delete dectwo;
}

TEST_LIST = {
    { "Single decoration", DecATest },
    { "Multiple decorations", DecABTest },
    { NULL, NULL }
};