#include <ObjectPool.hpp>

ObjectPool* ObjectPool::self = nullptr;
int Resource::get()
{
    return distinctValue;
}
void Resource::set(int val)
{
    distinctValue = val;
}

Resource* ObjectPool::get()
{
    if (resources.empty())
        return new Resource;

    auto res = resources.front();
    resources.pop_front();
    return res;
}

void ObjectPool::ret(Resource* res)
{
    res->set(0); // Reset the resource for future use.
    resources.push_back(res);
}

unsigned int ObjectPool::getCount()
{
    return resources.size();
}

ObjectPool* ObjectPool::getInstance()
{
    if (!self)
        self = new ObjectPool;
    return self;
}