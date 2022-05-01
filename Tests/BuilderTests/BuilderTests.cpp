#include <Builder.hpp>
#include <acutest.h>

void buildX()
{
    BuildManager m;
    m.set(new ConcBuilderX);
    m.construct();

    TEST_ASSERT(m.get().get() == "X1 X2 X3");
}

void buildY()
{
    BuildManager m;
    m.set(new ConcBuilderY);
    m.construct();

    TEST_ASSERT(m.get().get() == "Y1 Y2 Y3");
}

TEST_LIST = {
    { "X builder", buildX },
    { "Y builder", buildY },
    { NULL, NULL }
};