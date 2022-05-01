#ifndef OBJECT_POOL_HPP
#define OBJECT_POOL_HPP

#include <list>

class Resource {
    int distinctValue = 0;

public:
    int get();
    void set(int val);
};

class ObjectPool {
    std::list<Resource*> resources;
    static ObjectPool* self;
    ObjectPool() {};

public:
    static ObjectPool* getInstance();
    Resource* get();
    void ret(Resource* res);
    unsigned int getCount();
};

#endif // ONJECT_POOL_HPP