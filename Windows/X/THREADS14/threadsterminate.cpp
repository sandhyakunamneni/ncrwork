#include<Windows.h>
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
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
	WaitForSingleObject(hThread1, 5000); 
	DWORD exitcode=1;
	
	bool ret = GetExitCodeThread(hThread1, &exitcode);//gives the exit code of thread into 'exitcode'
	printf("exit code is : %ld", exitcode);
	//returns '0' if retrieved and '1' if not retrieved
	if (!ret)
	{
		printf("exit code retrieved succesfully\n");

	}
	else
	{
		printf("unsuccesfull\n");
	}
	BOOL t=TerminateThread(hThread1, exitcode);//thread terminates after printing from 0 to 4
	//returns '0' if thread termaination fails and '1' if terminates succesfully
	if (t == 0)
	{
		printf("not terminated\n");
	}
	else
	{
		printf("terminated\n");
	}
	CloseHandle(hThread1);
	getchar();
}