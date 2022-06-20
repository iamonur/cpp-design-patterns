#include <Patterns/Behavioral/Iterator/Iterator.hpp>
#include <acutest.h>

void iterateTen()
{
    ConcreteAggregate<int> list = ConcreteAggregate<int>(10);
    Iterator<int>* it = list.createIterator();

    unsigned int i = 0;
    for (; !it->isFinished(); it->next()) {
        i++;
    }

    TEST_ASSERT(i == 10);
    delete it;
}

TEST_LIST = {
    { "Iterate Five", iterateTen },
    { NULL, NULL }
};