%module Hello
%include "std_string.i"

%{
#define SWIG_FILE_WITH_INIT
#include "Hello.h"
%}

class Hello
{
    public:
        Hello(std::string msg);
        void greeting();
        void setMessage(std::string msg);
        std::string getMessage();
};