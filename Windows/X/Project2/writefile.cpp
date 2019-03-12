#include<windows.h>
#include<stdio.h>
#include<tchar.h>
#define BUFFSIZE 100
using namespace std;
void _tmain(int argc, LPTSTR argv[])
{
	HANDLE hFile;
	TCHAR buffer[BUFFSIZE] = TEXT("VNRVJIET");//a character array containing some text
	LPCWSTR filename = L"vv.txt";
	hFile = CreateFile(filename, GENERIC_WRITE, 0, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);//opening the file in write mode
	if (hFile == INVALID_HANDLE_VALUE)
	{
		_tprintf(_T("File doesnt exist.Error(%d)\n"), GetLastError());//prints the error if file cannot be opened
	}
	else
	{
		_tprintf(_T("File(%s)opened succesfully\n"), filename);
	}

	DWORD nbr;
	//ZeroMemory(buffer, BUFFSIZE);
	BOOL ret = WriteFile(hFile, buffer, sizeof(buffer), &nbr, NULL);//writing the contents of buffer into file
	if (ret == 0)
	{
		_tprintf(_T("cant write file.Error(%d)\n"), GetLastError());
	}
	else
	{
		_tprintf(_T("Text copied to :%S"), filename);//printing the contents in file
	}
	getchar();
}