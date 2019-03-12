#include<Windows.h>
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
DWORD WINAPI threadfunc1(LPVOID lparam)
{
	for (int i = 1;i <= 1000;i++)
	{
		printf("i=%d\n", i);
		//Sleep(1000);
	}
	return 0;
}
int main()
{
	DWORD thID1;
	HANDLE hThread1;
	hThread1 = CreateThread(NULL,
		0,
		threadfunc1,
		NULL,
		CREATE_SUSPENDED,
		&thID1);//creating thread
	if (hThread1 == NULL)
	{
		printf("unable to open thread1\n");
	}
	else
	{
		Sleep(5000);
		ResumeThread(hThread1);//Resuming the thread after 5 seconds
	}
	WaitForSingleObject(hThread1,5000);
	printf("exiting.....\n");
	getchar();
}