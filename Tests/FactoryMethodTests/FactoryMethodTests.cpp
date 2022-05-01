#include <FactoryMethod.hpp>
#include <acutest.h>

void createsProductOne()
{
    FactoryInterface* f = new ConcreteCreator();
    auto a = f->giveProductOne();
    TEST_ASSERT(a->getName() == "Prod one");
}

void createsProductTwo()
{
    FactoryInterface* f = new ConcreteCreator();
    auto a = f->giveProductTwo();
    TEST_ASSERT(a->getName() == "Prod two");
}

TEST_LIST = {
    { "Can create a product one", createsProductOne },
    { "Can create a product two", createsProductTwo },
    { NULL, NULL }
};