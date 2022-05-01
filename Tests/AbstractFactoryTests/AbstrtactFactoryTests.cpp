#include <AbstractFactory.hpp>
#include <acutest.h>

void createsProductsTypeX()
{
    auto af = new AbstractFactoryX();
    ProductA* a = af->createProductA();
    ProductB* b = af->createProductB();
    TEST_ASSERT(a->getProdAName() == "AX");
    TEST_ASSERT(b->getProdBName() == "BX");

    delete a;
    delete b;
    delete af;
}

void createsProductsTypeY()
{
    auto af = new AbstractFactoryY();
    ProductA* a = af->createProductA();
    ProductB* b = af->createProductB();
    TEST_ASSERT(a->getProdAName() == "AY");
    TEST_ASSERT(b->getProdBName() == "BY");

    delete a;
    delete b;
    delete af;
}

TEST_LIST = {
    { "Can create product family X", createsProductsTypeX },
    { "Can create product family Y", createsProductsTypeY },
    { NULL, NULL }
};