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
	ZeroMemory(&pi, sizeof(pi));
	LPWSTR lp = NULL;
	lp = new WCHAR[100];
	wcscpy_s(lp, _countof(L"notepad"), L"notepad");
	if (!CreateProcess(NULL, lp, NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi))//creating a process for opening notepad
	{
		printf(" CREATE PROCESS ERROR %d:", GetLastError());//prints error if notepad cannot be opened
	}
	printf("Handle of process %ld \n", pi.hProcess);
	printf("process id %ld \n", pi.dwProcessId);
	printf("Handle of process %ld \n", pi.hThread);
	printf("Handle of  %ld \n", pi.dwThreadId);
	cout << "\n";
	delete lp;
	lp = new WCHAR[100];
	wcscpy_s(lp, _countof(L"calc.exe"), L"calc.exe");
	if (!CreateProcess(NULL, lp, NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi))//creating a process for opening calculator
	{
		printf(" CREATE PROCESS ERROR %d:", GetLastError());//prints error if notepad cannot be opened
	}
	printf("Handle of process %ld \n", pi.hProcess);
	printf("process id %ld \n", pi.dwProcessId);
	printf("Handle of process %ld \n", pi.hThread);
	printf("Handle of  %ld \n", pi.dwThreadId);
	cout << "\n";
}