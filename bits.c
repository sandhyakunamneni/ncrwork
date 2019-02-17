#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;

	scanf_s("%d", &n);
	int b[10], r, i = 0, j, count = 0;
	while (n != 0)
	{
		r = n % 2;
		b[i] = r;
		n = n / 2;
		i++;
	}
	for (j = i - 1;j >= 0;j--)
	{
		printf(" %d", b[j]);
		if (b[j] == 1)
			count++;
	}
	printf("count%d\n", count);
	getchar();
	
}