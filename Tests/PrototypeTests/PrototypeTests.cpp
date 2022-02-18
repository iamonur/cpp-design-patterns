#include <Prototype.hpp>
#include <acutest.h>

void not_the_same_object() {
    auto a = ThatGuy::gimme();
    auto b = a->Clone();
    TEST_ASSERT(a != b);
}

void but_in_the_same_state() {
    auto a = ThatGuy::gimme();
    auto b = a->Clone();
    TEST_ASSERT(a->getState() == b->getState());
}

TEST_LIST = {
    {"Creates a new object that is different", not_the_same_object},
    {"Created object is in the same state", but_in_the_same_state},
    {NULL, NULL}
};