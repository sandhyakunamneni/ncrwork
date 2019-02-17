#include<stdio.h>
#include<conio.h>
void main()
{
	char s[20];
	int i, j;
	scanf_s("%s", s);
	for (i = 0;s[i] != '\0';i++)
	{
		for (j = i + 1;s[j] != 0;j++)
		{
			printf("%c", s[j]);
		}
		for (j = 0;j < i + 1;j++)
		{
			printf("%c", s[j]);
		}
		printf("\n");
	}
}