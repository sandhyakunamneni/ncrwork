#include<Windows.h>
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
long g_x = 0;
DWORD WINAPI threadfunc1(LPVOID lparam)
{
	for (int i = 0;i < 10;i++)
	{
		printf("i=%d\n", i);
		Sleep(1000);
	}
	return 0;
}
int main()
{
	DWORD thID1, thID2;
	HANDLE hThread1, hThread2;
	HANDLE arr_hand[2];
	hThread1 = CreateThread(NULL,
		0,
		threadfunc1,
		NULL,
		0,
		&thID1);
	if (hThread1 == NULL)
	{
		printf("unable to open thread1\n");
	}
	hThread2 = CreateThread(NULL,
		0,
		threadfunc1,
		NULL,
		0,
		&thID1);
	if (hThread2 == NULL)
	{
		printf("unable to open thread2\n");
	}
	arr_hand[0] = hThread1;
	arr_hand[1] = hThread2;
	WaitForMultipleObjects(2, arr_hand, TRUE, INFINITE);
	CloseHandle(hThread1);
	CloseHandle(hThread2);
	printf("waiting for user input before exiting\n");
	getchar();
	return 0;
}
