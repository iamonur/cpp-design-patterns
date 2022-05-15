#ifndef PROXY_HPP
#define PROXY_HPP

class Subject {
public:
    virtual ~Subject() { }
    virtual int method() = 0;
};

class ConcSubject : public Subject {
public:
    int method();
};

class ProxySubject : public Subject {
    ConcSubject* subj;

public:
    int method();
    ProxySubject();
    ~ProxySubject();
};

#endif // PROXY_HPP