#ifndef BULLDER_HPP
#define BUILDER_HPP

#include <string>

class Prod {
    std::string partOne = "";
    std::string partTwo = "";
    std::string partThree = "";

    void makeFirst(std::string first);
    void makeSecond(std::string second);
    void makeThird(std::string third);

    friend class ConcBuilderX;
    friend class ConcBuilderY;

public:
    std::string get();
};

class Builder {
protected:
    Prod product;

public:
    virtual ~Builder();
    Prod get();
    virtual void stepOne() = 0;
    virtual void stepTwo() = 0;
    virtual void stepThree() = 0;
};

class ConcBuilderX : public Builder {
public:
    void stepOne();
    void stepTwo();
    void stepThree();
};

class ConcBuilderY : public Builder {
public:
    void stepOne();
    void stepTwo();
    void stepThree();
};

class BuildManager {
    Builder* b = nullptr;

public:
    ~BuildManager();
    void set(Builder* bldr);
    Prod get();
    void construct();
};

#endif // BUILDER_HPP