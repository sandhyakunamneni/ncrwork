#include<windows.h>
#include<stdio.h>
#include<tchar.h>
#define BUFFSIZE 100
using namespace std;
void _tmain(int argc, LPTSTR argv[])
{
	HANDLE hFile;
	TCHAR buffer[BUFFSIZE];
	LPCWSTR filename = L"vv.txt";
	hFile = CreateFile(filename, GENERIC_READ, 0, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);//opening the file in read mode
	if (hFile == INVALID_HANDLE_VALUE)
	{
		_tprintf(_T("File doesnt exist.Error(%d)\n"), GetLastError());//gives an error if file doesnt exist
	}
	else
	{
		_tprintf(_T("File(%s)opened succesfully\n"), filename);
	}

	DWORD nbr;
	ZeroMemory(buffer, BUFFSIZE);
	BOOL ret = ReadFile(hFile, buffer, BUFFSIZE, &nbr, NULL);//reading the contents of hfile with the help of buffer
	if (ret == 0)
	{
		_tprintf(_T("cant read file.Error(%d)\n"), GetLastError());
	}
	else
	{
		_tprintf(_T("Text :%S"), buffer);//prints the contents of file"vv.txt"
	}
	getchar();
}