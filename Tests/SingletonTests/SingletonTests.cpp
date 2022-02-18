#include "../acutest/acutest.h"
#include "../Patterns/Creational/Singleton/Singleton.hpp"

void starts_as_nullptr() {
    TEST_ASSERT(SingletonClass::PeekInstance() == nullptr);
}

void gets_instance() {
    auto a = SingletonClass::GetInstance();
    TEST_ASSERT(a != nullptr);
}

void gets_cleared() {
    auto a = SingletonClass::GetInstance();
    SingletonClass::ResetInstance();
    TEST_ASSERT((a != nullptr) && (SingletonClass::PeekInstance() == nullptr));
}

TEST_LIST = {
    {"Starts as nullptr", starts_as_nullptr},
    {"Gets instance", gets_instance},
    {"Gets cleared", gets_cleared},
    {NULL, NULL}
};
