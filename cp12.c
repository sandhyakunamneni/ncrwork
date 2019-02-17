#include<stdio.h>
#include<stdlib.h>
int rotate(int, int);
int main()
{
	int n, b;
	scanf_s("%d", &n);
	scanf_s("%d", &b);
	rotate(n, b);
	getch();
	return 0;
}
int rotate(int n, int b)
{
	printf("%d", n >> b | n << (32 - b));
}
