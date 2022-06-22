#include <TemplateMethod.hpp>

std::string FriesRecipe::FryPotatoes()
{
    return "French fries";
}
std::string FriesRecipe::serve()
{
    return FryPotatoes() + " " + ExtraFries() + " with " + Sauce();
}

std::string RegularFries::ExtraFries()
{
    return "Nothing else";
}

std::string RegularFries::Sauce()
{
    return "Ketchup and Mayonnaise";
}

std::string FishNChips::ExtraFries()
{
    return "Fish sticks";
}

std::string FishNChips::Sauce()
{
    return "No sauce";
}