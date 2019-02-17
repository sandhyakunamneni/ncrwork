#include<stdio.h>
#include<conio.h>
void main()
{
	char *s;
	s = (char *)malloc(sizeof(char) * 20);
	scanf_s("%s[^\n]", s);
	puts(s);
}