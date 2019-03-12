#include<Windows.h>
#include<stdio.h>
#include<iostream>
using namespace std;
HANDLE hEvent;
DWORD WINAPI COUNT_WORDS(LPVOID lparam)
{
	WaitForSingleObject(hEvent, INFINITE);
	printf("counting words\n");
	return 0;
}
DWORD WINAPI CHECK_SPELLING(LPVOID lparam)
{
	WaitForSingleObject(hEvent, INFINITE);
	printf("spelling check\n");
	return 0;
}
DWORD WINAPI CHECK_GRAMMAR(LPVOID lparam)
{
	WaitForSingleObject(hEvent, INFINITE);
	printf("grammar check\n");
	return 0;
}
int main()
{
	DWORD thID1, thID2, thID3;
	HANDLE hThread1, hThread2, hThread3;
	HANDLE arr_hand[3];
	hEvent = CreateEvent(NULL, TRUE, FALSE, TEXT("nameobject"));
	hThread1 = CreateThread(NULL, 0, COUNT_WORDS, NULL, 0, &thID1);
	if (hThread1 == NULL)
	{
		printf("unable to create thread%\n", GetLastError());
		getchar();
		return 0;
	}
	hThread2 = CreateThread(NULL, 0, CHECK_SPELLING, NULL, 0, &thID2);
	if(hThread2 == NULL)
	{
		printf("unable to create thread%\n", GetLastError());
		getchar();
		return 0;
	}
	hThread3 = CreateThread(NULL, 0, CHECK_GRAMMAR, NULL, 0, &thID3);
	if (hThread3 == NULL)
	{
		printf("unable to create thread%\n", GetLastError());
		getchar();
		return 0;
	}
	printf("file opened\n");
	SetEvent(hEvent);
	arr_hand[0] = hThread1;
	arr_hand[1] = hThread2;
	arr_hand[2] = hThread3;
	WaitForMultipleObjects(3, arr_hand, TRUE, INFINITE);
		printf("waiting for user input\n");
	getchar();
	return 0;

}