


#pragma once
#ifdef DLL_EXPORTS
#define MYLIBAPI extern "C" __declspec(dllexport)
#else
#define MYLIBAPI extern "C" __declspec(dllimport)
#endif
MYLIBAPI int add(int nleft, int nright);
MYLIBAPI int sub(int nleft, int nright);