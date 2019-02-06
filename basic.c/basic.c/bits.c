#include<stdio.h>
void main()
{
	long int n,r;
	int count = 0;
	printf("enter no");
	scanf("%lu", &n);
	while (n != 0)
	{
		r = n % 10;
		if (r == 1)
		{
			count++;
		}
		n = n / 10;
	}
	printf("%d", count);
	getch();
}