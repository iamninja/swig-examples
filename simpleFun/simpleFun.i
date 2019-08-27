%module simpleFun

%{
#define SWIG_FILE_WITH_INIT
#include "simpleFun.h"
%}

int plusAnswer(int n);