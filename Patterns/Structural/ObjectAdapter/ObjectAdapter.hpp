class Target {
public:
    virtual ~Target();
    virtual void operate() = 0;
};

class Adaptee {
public:
    void irregularSignatureMethod();
};

class Adapter : public Target {
    Adaptee* sub;

public:
    Adapter()
        : sub()
    {
    }

    ~Adapter();
    void operate();
};