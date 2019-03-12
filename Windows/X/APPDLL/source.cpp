#include<stdio.h>
#include<windows.h>
//#include "mylib.h"
typedef int(*add)(int, int);
typedef int(*sub)(int, int);
typedef int(*mul)(int, int);
typedef int(*divv)(int, int);
typedef int(*MYPROC)(int, int);
int main()
{
	HMODULE hdl;
	int sum, sub, mul, div;
	MYPROC ADD, SUB, MUL, DIV;
	hdl = LoadLibraryEx(
		TEXT("E:\\windows\\files\\X\\Debug\\DLL1.dll"),
		NULL,
		NULL);
	if (hdl == NULL)
	{
		printf("load library Ex failed with error code %d\n", GetLastError());
		getchar();
		return 0;
	}
	ADD = (MYPROC)GetProcAddress(hdl, (LPCSTR)"add");
	if (ADD == NULL)
	{
		printf("cant call process add");
		getchar();
		return 0;
	}
	sum = ADD(20, 10);
	printf("sum of 20 and 10 =%d\n", sum);
	SUB = (MYPROC)GetProcAddress(hdl, (LPCSTR)"sub");
	if (SUB == NULL)
	{
		printf("cant call process sub");
		getchar();
		return 0;
	}
	sub = SUB(20, 10);
	printf("difference of 20 and 10 =%d\n", sub);
	MUL = (MYPROC)GetProcAddress(hdl, (LPCSTR)"mul");
	if (MUL == NULL)
	{
		printf("cant call process mul");
		getchar();
		return 0;
	}
	mul = MUL(20, 10);
	printf("product of 20 and 10 =%d\n", mul);
	DIV = (MYPROC)GetProcAddress(hdl, (LPCSTR)"divv");
	if (DIV == NULL)
	{
		printf("cant call process division");
		getchar();
		return 0;
	}
	div = DIV(20, 10);
	printf("sum of 20 and 10 =%d\n", div);
	getchar();
	return 0;
}