#include <Mediator.hpp>
#include <acutest.h>

void canPushNewMediatee()
{
    Mediator* med = new ConcMediator();
    med->add(new ConcMediatee(med, 0));

    delete med;
}

void canSendMessagesById()
{
    Mediator* med = new ConcMediator();
    Mediatee* m = new ConcMediatee(med, 3);
    med->add(m);

    med->distributeById(3, "Test Message");

    TEST_ASSERT(m->send() == "Test Message");

    delete med;
}

void canSendMessagesByPosition()
{
    Mediator* med = new ConcMediator();
    Mediatee* m = new ConcMediatee(med, 3);
    med->add(m);

    med->distributeAt(0, "Test Message");

    TEST_ASSERT(m->send() == "Test Message");

    delete med;
}

void canBroadcast()
{
    Mediator* med = new ConcMediator();
    Mediatee* m = new ConcMediatee(med, 3);
    Mediatee* mm = new ConcMediatee(med, 7);
    med->add(m);
    med->add(mm);

    med->distribute("Test Message");

    TEST_ASSERT(m->send() == "Test Message");
    TEST_ASSERT(mm->send() == "Test Message");

    delete med;
}

TEST_LIST = {
    { "Can push mediatees in", canPushNewMediatee },
    { "Can send messages by ID", canSendMessagesById },
    { "Can send messages by position", canSendMessagesByPosition },
    { "Can broadcast", canBroadcast },
    { NULL, NULL }
};