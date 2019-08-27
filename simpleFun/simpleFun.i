%module simpleFun

%{
#define SWIG_FILE_WITH_INIT
#include "simpleFun.cpp"
%}

int simpleFun(int n);