#include<stdio.h>
#include<conio.h>
void main()
{
	int f, n;
	printf("enter no");
	scanf_s("%d", &n);
	f = factorial(n);
	printf("factorial value is %d", f);
}
int factorial(int n)
{
	if (n == 0 || n == 1)
	{
		return 1;

	}
	else {
		return n * factorial(n - 1);
	}

	getchar();
}