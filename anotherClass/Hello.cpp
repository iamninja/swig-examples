#include "Hello.h"

Hello::Hello(std::string msg)
{
    Hello::message = msg;
}

void Hello::sayHello()
{
    std::cout << "Hi there!" << std::endl;
}

void Hello::greeting()
{
    sayHello();
    std::cout << Hello::message << std::endl;
}

void Hello::setMessage(std::string msg)
{
    Hello::message = msg;
}

std::string Hello::getMessage()
{
    return Hello::message;
} 