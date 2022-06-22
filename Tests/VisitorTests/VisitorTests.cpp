#include <Visitor.hpp>
#include <acutest.h>

void works()
{
    Visitee* v = new ConcVisitee();
    Visitor* vv = new ConcVisitor();

    v->accept(*vv);

    TEST_ASSERT(v->isVisited());
}

TEST_LIST = {
    { "Pattern implemented succesfully", works },
    { NULL, NULL }
};