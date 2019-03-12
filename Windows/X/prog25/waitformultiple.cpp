#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
DWORD WINAPI thread_fun(LPVOID lparam)
{
	for (int i = 0;i < 5;i++)
	{
		printf("i=%d\n", i);
		Sleep(1000);
	}
	return 1;
}
DWORD WINAPI thread_fun1(LPVOID lparam)
{
	for (int i = 0;i < 5;i++)
	{
		printf("i=%d\n", i);
		Sleep(1000);
	}
	/*printf("hello");
	Sleep(2000);*/
	return 1;
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
	hTh2 = CreateThread(NULL, 0, thread_fun1, NULL, 0, &thID1);
	if (hTh2 == NULL)
	{
		printf("unable to create\n");
		getchar();

	}
	arr_hand[0] = hTh1;
	arr_hand[1] = hTh2;
	DWORD dw = WaitForMultipleObjects(2, arr_hand, TRUE, 10000);
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
	CloseHandle(hTh2);
	printf("waiting for user input before exitting the process\n");
	getchar();
}
