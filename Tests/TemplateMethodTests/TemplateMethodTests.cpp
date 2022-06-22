#include <TemplateMethod.hpp>
#include <acutest.h>

void FishAndChips()
{
    FriesRecipe* cook = new FishNChips();
    TEST_ASSERT(cook->serve() == "French fries Fish sticks with No sauce");

    delete cook;
}

void FrenchFries()
{
    FriesRecipe* cook = new RegularFries();
    TEST_ASSERT(cook->serve() == "French fries Nothing else with Ketchup and Mayonnaise");
}

TEST_LIST = {
    { "Fish and chips recipe works", FishAndChips },
    { "Regular fries recipe works", FrenchFries },
    { NULL, NULL }
};