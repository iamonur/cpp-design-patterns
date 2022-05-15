#include <Proxy.hpp>

int ConcSubject::method()
{
    return 42;
}

ProxySubject::ProxySubject()
{
    subj = new ConcSubject();
}

ProxySubject::~ProxySubject()
{
    delete subj;
}

int ProxySubject::method()
{
    return subj->method();
}
