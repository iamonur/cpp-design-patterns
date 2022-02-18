#include "Singleton.hpp"
SingletonClass* SingletonClass::instance = nullptr;

SingletonClass* SingletonClass::GetInstance(){
    if(instance == nullptr)
        instance = new SingletonClass();

    return instance;
}

void SingletonClass::ResetInstance() {
    if(instance == nullptr)
        return;

    delete instance;
    instance = nullptr;
}

SingletonClass::SingletonClass() {

}

SingletonClass::~SingletonClass() {

}

SingletonClass* SingletonClass::PeekInstance() {
    return instance;
}