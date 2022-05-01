class TargetInterface {
public:
    virtual ~TargetInterface();
    virtual void operate() = 0;
};

class Adaptee {
public:
    void irregularInterfaceMethod();
};

class Adapter : public TargetInterface, private Adaptee {
    virtual void operate();
};