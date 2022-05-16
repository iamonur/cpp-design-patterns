#ifndef COMMAND_HPP
#define COMMAND_HPP

class Receiver {
public:
    void work(int& toDouble);
};

class Command {
public:
    virtual ~Command() { };
    virtual void execute (int& toDouble) = 0;
};

class ConcCommand : public Command {
    Receiver* receiver;
public:    
    ConcCommand(Receiver* r) : receiver(r) { }
    void execute(int& toDouble);
};

class Client {
    Command* myCommand = nullptr;
public:
    void setCommand(Command* com);
    int operate(int num);
};


#endif