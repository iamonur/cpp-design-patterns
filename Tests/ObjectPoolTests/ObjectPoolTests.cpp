#include <ObjectPool.hpp>
#include <acutest.h>

void startsZero()
{
    TEST_ASSERT(ObjectPool::getInstance()->getCount() == 0);
}
void creates()
{
    auto a = ObjectPool::getInstance()->get();
    TEST_ASSERT(a != nullptr);
    delete a;
}
void recycles()
{
    ObjectPool::getInstance()->ret(ObjectPool::getInstance()->get());
    TEST_ASSERT(ObjectPool::getInstance()->getCount() == 1);
}
TEST_LIST = {
    { "No object at start", startsZero },
    { "Creates", creates },
    { "Recycles", recycles },
    { NULL, NULL }
};