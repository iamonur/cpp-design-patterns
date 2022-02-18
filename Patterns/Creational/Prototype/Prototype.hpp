#include <string>

class Prototype {
public:
    virtual ~Prototype();
    virtual Prototype* Clone() = 0;
    virtual std::string getState() = 0;
};

class ConcretePrototypeA : public Prototype {
    std::string state;
    ConcretePrototypeA(std::string in);
    friend class ThatGuy;
public:
    ~ConcretePrototypeA();
    Prototype* Clone();
    std::string getState();
};

struct ThatGuy {
    static Prototype* gimme();
};