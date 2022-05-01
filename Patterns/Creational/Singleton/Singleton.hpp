#ifndef SINGLETON_CLASS_HPP
#define SINGLETON_CLASS_HPP

class SingletonClass {
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
    static SingletonClass* instance;
};

#endif // SINGLETON_CLASS_HPP