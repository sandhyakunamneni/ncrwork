#include<Windows.h>
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
//#include<Wdm.h>
using namespace std;
long g_x;
DWORD WINAPI threadfunc1(LPVOID lparam)//thread function for incrementing a number
{
	InterlockedExchangeAdd(&g_x, 1);//API for thread synchronisation
	//g_x++;
	return 0;
}
DWORD WINAPI threadfunc2(LPVOID lparam)//thread function for incrementing a number
{

	InterlockedExchangeAdd(&g_x, 1);//API for thread synchronisation
	//g_x++;
	return 0;
}
int main()
{
	DWORD thID1, thID2;
	HANDLE hThread1, hThread2;
	HANDLE arr_hand[2];
	while (1)
	{
		g_x = 0;
		hThread1 = CreateThread(NULL,
			0,
			threadfunc1,
			NULL,
			0,
			&thID1);//creating thread1
		if (hThread1== NULL)
		{
			printf("unable to create thread\n");
			return 1;
		}
		hThread2 = CreateThread(NULL,
			0,
			threadfunc2,
			NULL,
			0,
			&thID1);//creating thread2
		if (hThread2 == NULL)
		{
			printf("unable to create thread\n");
			return 1;
		}
		arr_hand[0] = hThread1;
		arr_hand[1] = hThread2;
		WaitForMultipleObjects(2, arr_hand, TRUE, INFINITE);
		CloseHandle(hThread1);
		CloseHandle(hThread2);
		printf("g_x value %d \n", g_x);
		if (g_x == 1)
		{
			break;//if g_x becomes 1,then it will  come out of the loop
		}
	}
	printf("waiting for user input before exiting\n");
	getchar();

}
