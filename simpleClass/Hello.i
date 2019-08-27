%module Hello

%{
#define SWIG_FILE_WITH_INIT
#include "Hello.h"
%}

class Hello
{
    public:
        void sayHello();
};