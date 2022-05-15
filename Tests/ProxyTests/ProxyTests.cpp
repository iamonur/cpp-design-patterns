#include <Proxy.hpp>
#include <acutest.h>

void ProxyWorks()
{
    ProxySubject p;
    TEST_ASSERT(p.method() == 42);
}

TEST_LIST = {
    { "Pattern is well-implemented.", ProxyWorks },
    { NULL, NULL }
};