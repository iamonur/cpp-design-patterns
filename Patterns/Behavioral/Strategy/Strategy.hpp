#ifndef STRATEGY_HPP
#define STRATEGY_HPP

class SortingAlgorithm {
protected:
    void swap(int* x, int* y);

public:
    virtual ~SortingAlgorithm();
    virtual void sort(int toSort[], const unsigned int size) = 0;
};

class InsertionSort : public SortingAlgorithm {
public:
    void sort(int toSort[], const unsigned int size);
    ~InsertionSort() { }
};

class BubbleSort : public SortingAlgorithm {
public:
    void sort(int toSort[], const unsigned int size);
    ~BubbleSort() { }
};

class Ctxt {
    SortingAlgorithm* sorter;

public:
    Ctxt(SortingAlgorithm* const str);
    ~Ctxt();
    void setSortingAlgorithm(SortingAlgorithm* const str);
    void sort(int toSort[], const unsigned int size);
};

#endif // STRATEGY_HPP