#include <Strategy.hpp>

void SortingAlgorithm::swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

SortingAlgorithm::~SortingAlgorithm() { }

void InsertionSort::sort(int toSort[], const unsigned int size)
{
    // https://www.geeksforgeeks.org/selection-sort/
    int i, j, min_idx;
    for (i = 0; i < size - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < size; j++)
            if (toSort[j] < toSort[min_idx])
                min_idx = j;
        swap(&toSort[min_idx], &toSort[i]);
    }
}

void BubbleSort::sort(int toSort[], const unsigned int size)
{
    // https://www.geeksforgeeks.org/bubble-sort/
    int i, j;
    for (i = 0; i < size - 1; i++)
        for (j = 0; j < size - i - 1; j++)
            if (toSort[j] > toSort[j + 1])
                swap(&toSort[j], &toSort[j + 1]);
}

Ctxt::Ctxt(SortingAlgorithm* const str)
    : sorter(str)
{
}

Ctxt::~Ctxt()
{
    if (sorter)
        delete sorter;
}

void Ctxt::setSortingAlgorithm(SortingAlgorithm* const str)
{
    if (sorter)
        delete sorter;
    sorter = str;
}

void Ctxt::sort(int toSort[], const unsigned int size)
{
    sorter->sort(toSort, size);
}