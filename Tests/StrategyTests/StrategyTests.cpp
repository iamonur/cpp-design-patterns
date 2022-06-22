#include <Strategy.hpp>
#include <acutest.h>

void bothAlgorithmsWorkAsIntended()
{
    int toSort[6] = { 1, 55, 93, 2, 7, 0 };
    int toSort2[6] = { 1, 55, 93, 2, 7, 0 };
    int sorted[6] = { 0, 1, 2, 7, 55, 93 };
    Ctxt c = Ctxt(new BubbleSort());
    c.sort(toSort, 6);

    c.setSortingAlgorithm(new InsertionSort());
    c.sort(toSort2, 6);

    for (int i = 0; i < 6; i++) {
        TEST_ASSERT(sorted[i] == toSort[i]);
        TEST_ASSERT(sorted[i] == toSort2[i]);
    }
}

TEST_LIST = {
    { "Both algorithms work as intended.", bothAlgorithmsWorkAsIntended },
    { NULL, NULL }
};