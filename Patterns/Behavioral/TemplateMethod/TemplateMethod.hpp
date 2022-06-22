#ifndef TEMPLATE_METHOD_HPP
#define TEMPLATE_METHOD_HPP

#include <string>

class FriesRecipe {
protected:
    std::string FryPotatoes();
    virtual std::string ExtraFries() = 0;
    virtual std::string Sauce() = 0;

public:
    virtual ~FriesRecipe() {};
    std::string serve();
};

class RegularFries : public FriesRecipe {
protected:
    std::string ExtraFries();
    std::string Sauce();

public:
    ~RegularFries() { }
};

class FishNChips : public FriesRecipe {
protected:
    std::string ExtraFries();
    std::string Sauce();

public:
    ~FishNChips() { }
};

#endif // TEMPLATE_METHOD_HPP