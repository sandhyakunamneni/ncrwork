#pragma once
#ifdef DLL1_EXPORTS
#define MYLIBAPI extern "C" __declspec(dllexport)
#else
#define MYLIBAPI extern "C" __declspec(dllimport)
#endif
MYLIBAPI int add(int nleft, int nright);
MYLIBAPI int sub(int nleft, int nright);
MYLIBAPI int mul(int nleft, int nright);
MYLIBAPI float divv(int nleft, int nright);