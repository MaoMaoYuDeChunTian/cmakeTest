#pragma onece

#include"stdio.h"

#ifdef HELLOLIB
#define HELLOLIB extern "C" _declspec(dllimport) 
#else
#define HELLOLIB extern "C" _declspec(dllexport) 
#endif

HELLOLIB void runHell();