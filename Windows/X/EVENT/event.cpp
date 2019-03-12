#include<Windows.h>
#include<iostream>
#include<stdio.h>
#include<tchar.h>
using namespace std;
void main()
{
	HANDLE g_hEvent = CreateEvent(
		NULL,
		FALSE,
		FALSE,
		TEXT("namedevent")
	);
	if (g_hEvent == NULL)
	{
		_tprintf(_T("cant open"));
	}
	getchar();
}