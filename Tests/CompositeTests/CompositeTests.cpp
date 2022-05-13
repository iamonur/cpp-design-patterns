#include <Composite.hpp>
#include <acutest.h>

void compositeStructureTest()
{
    std::string expected = "ThisIsTheCompositeStructureTest";
    Composite* root = new Composite;
    Composite* first = new Composite;
    Composite* first_sec = new Composite;
    Composite* second = new Composite;

    first->add(new Leaf("This"));
    first->add(first_sec);
    first_sec->add(new Leaf("Is"));
    first_sec->add(new Leaf("The"));
    first_sec->add(new Leaf("Composite"));
    second->add(new Leaf("Structure"));
    second->add(new Leaf("Test"));
    root->add(first);
    root->add(second);

    TEST_ASSERT(root->traverse() == expected);

    delete root;
}

TEST_LIST = {
    { "Composite structure working", compositeStructureTest },
    { NULL, NULL }
};