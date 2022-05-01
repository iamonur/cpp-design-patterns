class BackgroundImplementation {
public:
    virtual ~BackgroundImplementation();
    virtual void action() = 0;
};

class ConcBGImpX : public BackgroundImplementation {
public:
    ~ConcBGImpX();
    void action();
};

class ConcBGImpY : public BackgroundImplementation {
public:
    ~ConcBGImpY();
    void action();
};

class Abstraction {
public:
    virtual ~Abstraction();
    virtual void operation() = 0;
};

class RefinedAbstraction : public Abstraction {
    BackgroundImplementation* implementor;

public:
    ~RefinedAbstraction();
    RefinedAbstraction(BackgroundImplementation* impl);
    void operation();
};