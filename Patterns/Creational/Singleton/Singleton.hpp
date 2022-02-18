#ifndef SINGLETON_CLASS_HPP
#define SINGLETON_CLASS_HPP

//Due to rule of five, since the constructor and the destructor
//of SingletonClass is explicitly defined, the other three should be defined/deleted.
//An explaination of the rule of five can be found at:
//https://en.cppreference.com/w/cpp/language/rule_of_three

class SingletonClass
{
public:
    SingletonClass(SingletonClass const&) = delete;
    SingletonClass& operator=(SingletonClass const&) = delete;
    SingletonClass& operator=(SingletonClass&&) = delete;

    static SingletonClass* GetInstance();
    static void ResetInstance();

    static SingletonClass* PeekInstance();

private:
    SingletonClass();
    ~SingletonClass();
    static SingletonClass *instance;
};

#endif//SINGLETON_CLASS_HPP