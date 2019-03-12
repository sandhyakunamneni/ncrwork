#include<Windows.h>
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
//#include<Wdm.h>
using namespace std;
CRITICAL_SECTION g_cs;
long g_sum;
DWORD WINAPI threadfunc1(LPVOID lparam)
{
	//critical section is used for thread synchronisation
	EnterCriticalSection(&g_cs);//entering the critical section
	for (int i = 0;i < 10;i++)
	{
		g_sum += i;
	}
	LeaveCriticalSection(&g_cs);//leaving the critical section
	return g_sum;
}
DWORD WINAPI threadfunc2(LPVOID lparam)
{
	EnterCriticalSection(&g_cs);//entering the critical section
	for (int i = 0;i < 10;i++)
	{
		g_sum += i;//calculates the sum of numbers
	}
	LeaveCriticalSection(&g_cs);//leaving the critical section
	return g_sum;
}
int main()
{
	DWORD thID1, thID2;
	HANDLE hThread1, hThread2;
	HANDLE arr_hand[2];
	InitializeCriticalSection(&g_cs);
	while(1)
	{
	g_sum = 0;
	
	hThread1 = CreateThread(NULL,
		0,
		threadfunc1,
		NULL,
		0,
		&thID1);
	if (hThread1 == NULL)
	{
		printf("unable to create thread\n");
		return 1;
	}
	hThread2 = CreateThread(NULL,
		0,
		threadfunc2,
		NULL,
		0,
		&thID1);
	if (hThread2 == NULL)
	{
		cout << "unable to create thread\n" << endl;
		return 1;
	}
	arr_hand[0] = hThread1;
	arr_hand[1] = hThread2;
	WaitForMultipleObjects(2, arr_hand, TRUE, INFINITE);
	cout << "g_sum value \n" << g_sum << endl;
  }
	CloseHandle(hThread1);
	CloseHandle(hThread2);
	cout<<"waiting for user input before exiting\n"<<endl;
	getchar();

}
