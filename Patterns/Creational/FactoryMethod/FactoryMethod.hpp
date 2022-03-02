#include <string>

class Prod
{
public:
    virtual ~Prod();
    virtual std::string getName() = 0;
};

class ConcProdOne : public Prod
{
public:
    ~ConcProdOne();
    std::string getName();
};

class ConcProdTwo : public Prod
{
public:
    ~ConcProdTwo();
    std::string getName();
};

class FactoryInterface
{
public:
    virtual ~FactoryInterface();
    virtual Prod* giveProductOne() = 0;
    virtual Prod* giveProductTwo() = 0;
};



class ConcreteCreator : public FactoryInterface
{
public:
    ~ConcreteCreator();
    Prod* giveProductOne();
    Prod* giveProductTwo();
    void removeProduct( Prod *product );
};