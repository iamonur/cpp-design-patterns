#include <Command.hpp>

void Receiver::work(int& toDouble) {
    toDouble *= 2;
}

void ConcCommand::execute(int& toDouble) {
    if(receiver) 
        receiver->work(toDouble);
}

void Client::setCommand(Command* com) {
    myCommand = com;
}

int Client::operate(int num) {
    if(myCommand != nullptr) myCommand->execute(num);
    return num;
}