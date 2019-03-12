#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
DWORD WINAPI thread_fun(LPVOID lparam)
{
	for (int i = 0;i < 5;i++)
	{
		printf("i=%d\n", i);
		//Sleep(1000);
	}
	return 0;
}
void main()
{
	DWORD thID1, thID2;
	HANDLE hTh1, hTh2;
	HANDLE arr_hand[2];
	hTh1 = CreateThread(NULL, 0, thread_fun, NULL, 0, &thID1);
	if (hTh1 == NULL)
	{
		printf("unable to create\n");
		getchar();
		
	}
	DWORD dw = WaitForSingleObject(hTh1, 1000);
	switch (dw)
	{
	case WAIT_OBJECT_0:
		printf("thread terminated\n");
		break;
	case WAIT_TIMEOUT:
		printf("time expired\n");
		break;
	case WAIT_FAILED:
		printf("wait failed\n");
		break;
	}
CloseHandle(hTh1);
printf("waiting for user input before exitting the process\n");
getchar();
}