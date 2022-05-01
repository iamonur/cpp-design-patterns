#include <string>

class ProductA {
public:
    virtual ~ProductA();
    virtual std::string getProdAName() = 0;
};

class ProductB {
public:
    virtual ~ProductB();
    virtual std::string getProdBName() = 0;
};

class ProductAX : public ProductA {
public:
    ~ProductAX();
    std::string getProdAName();
};

class ProductAY : public ProductA {
public:
    ~ProductAY();
    std::string getProdAName();
};

class ProductBX : public ProductB {
public:
    ~ProductBX();
    std::string getProdBName();
};

class ProductBY : public ProductB {
public:
    ~ProductBY();
    std::string getProdBName();
};

class AbstractFactory {
public:
    virtual ~AbstractFactory();
    virtual ProductA* createProductA() = 0;
    virtual ProductB* createProductB() = 0;
};

class AbstractFactoryX : public AbstractFactory {
public:
    ~AbstractFactoryX();
    ProductA* createProductA();
    ProductB* createProductB();
};

class AbstractFactoryY : public AbstractFactory {
public:
    ~AbstractFactoryY();
    ProductA* createProductA();
    ProductB* createProductB();
};
