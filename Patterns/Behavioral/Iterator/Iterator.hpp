#ifndef ITERATOR_HPP
#define ITERATOR_HPP

template <typename T>
class Iterator;
template <typename T>
class ConcreteIterator;

template <typename T>
class Aggragate {
public:
    virtual ~Aggragate() { }
    virtual Iterator<T>* createIterator() = 0;
};

template <typename T>
class ConcreteAggregate : public Aggragate<T> {
    T* list;
    unsigned int count;

public:
    ConcreteAggregate(const unsigned int size)
        : count(size)
    {
        list = new T[size]();
    };
    ~ConcreteAggregate()
    {
        delete[] list;
    }
    Iterator<T>* createIterator()
    {
        return new ConcreteIterator<T>(this);
    }
    unsigned int size() const { return count; }
    T* get(unsigned int idx)
    {
        return &list[idx];
    }
};

template <typename T>
class Iterator {

public:
    virtual ~Iterator() { }
    virtual void first() = 0;
    virtual void next() = 0;
    virtual bool isFinished() const = 0;
    virtual T* currentItem() const = 0;
};

template <typename T>
class ConcreteIterator : public Iterator<T> {
    ConcreteAggregate<T>* list;
    unsigned int index;

public:
    ConcreteIterator(ConcreteAggregate<T>* l)
        : list(l)
        , index(0)
    {
    }
    ~ConcreteIterator() { }
    virtual void first()
    {
        index = 0;
    }
    virtual void next()
    {
        index++;
    }
    virtual bool isFinished() const
    {
        if (index < list->size())
            return false;
        return true;
    }
    virtual T* currentItem() const
    {
        if (isFinished())
            return nullptr;

        return (list->get(index));
    }
};

#endif