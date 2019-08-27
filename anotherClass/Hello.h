#include <iostream>
#include <string>

class Hello
{
    private:
        std::string message;
        
    public:
        Hello(std::string msg);
        void sayHello();
        void greeting();
        void setMessage(std::string msg);
        std::string getMessage();
};