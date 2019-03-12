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
	hFile = CreateFile(filename, GENERIC_READ, 0, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
	if (hFile == INVALID_HANDLE_VALUE)
	{
		_tprintf(_T("File doesnt exist.Error(%d)\n"), GetLastError());
	}
	else
	{
		_tprintf(_T("File(%s)opened succesfully\n"), filename);
	}

	DWORD nbr;
	while (1)
	{
		ZeroMemory(buffer, BUFFSIZE);
		BOOL ret = ReadFile(hFile, buffer, nbr, &nbr, NULL);
		if (ret == 0)
		{
			_tprintf(_T("cant read file.Error(%d\n"), GetLastError());
		}
		if (ret&&nbr == 0)
		{
			_tprintf(_T("reached EOF\n"));
			break;
		}
	}
}