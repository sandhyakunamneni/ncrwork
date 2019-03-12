#include<Windows.h>
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
DWORD exitcode;
DWORD WINAPI threadfunc1(LPVOID lparam)
{
	for (int i = 0;i < 10;i++)
	{
		printf("i=%d\n", i);
		if (i == 5)
		{
			ExitThread(exitcode);//exits the code when i is equal to 5
		}
	}
	return 0;
}
int main()
{
	DWORD thID1;
	HANDLE hThread1;
	HANDLE arr_hand[2];
	hThread1 = CreateThread(NULL,
		0,
		threadfunc1,
		NULL,
		0,
		&thID1);//creating a thread
	if (hThread1 == NULL)
	{
		printf("unable to open thread1\n");
	}
	bool ret = GetExitCodeThread(hThread1, &exitcode);//gives the exit code of thread into 'exitcode'
	printf("exit code is : %ld", exitcode);
	//returns '0' if retrieved and '1' if not retrieved
	if (!ret)
	{
		printf("exitcode retrieved successfully\n");

	}
	else
	{
		printf("not succesfull\n");
	}
	WaitForSingleObject(hThread1, 5000);//waiting for the thread completion 
	CloseHandle(hThread1);
	printf("thread treminated succesfully");
	getchar();
}