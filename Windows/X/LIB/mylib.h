#pragma once
#ifdef MYLIB_EXPORTS
#define MYLIBAPI extern "C" __declspec(dllexport)
#endif