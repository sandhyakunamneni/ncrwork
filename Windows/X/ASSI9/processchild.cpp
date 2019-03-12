#include<Windows.h>
#include<stdio.h>
#include<iostream>
#include<tchar.h>
using namespace std;
void main()
{
	STARTUPINFO si;
	PROCESS_INFORMATION pi;
	ZeroMemory(&si, sizeof(si));
	//si.cb = sizeof(si);
	ZeroMemory(&pi, sizeof(pi));
	LPWSTR lp = NULL;
	lp = new WCHAR[100];
	wcscpy_s(lp, _countof(L"notepad"), L"notepad");
	//HANDLE hProcess =(HANDLE)CreateProcess(NULL, lp, NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi);
	if (!CreateProcess(NULL, lp, NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi))
	{
		printf(" CREATE PROCESS ERROR %d:", GetLastError());
	}
	printf("current process id : %ld \n", GetCurrentProcessId());
	printf("current thread id :%ld \n", GetCurrentThreadId()																																																					);
	printf("process id : %ld \n", GetProcessId(pi.hProcess));
	printf("thread id :  %ld \n", GetThreadId(pi.hThread));
	printf("process id of thread: %ld \n", GetProcessIdOfThread(pi.hThread));
	cout << "\n";
	delete lp;
	getchar();
}