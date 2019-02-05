#include<stdio.h>
void main()
{
	int a[10],b[10],c[10];
	int i,j=0,k=0;
	printf("enter values");
	for (i = 0;i < 10;i++)
	{
		scanf("%d", &a[i]);
	}

	for (i = 0;i < 10;i++)
	{
		if (a[i] <= 0)
		{
			b[j] = a[i];
			j++;
		}
		else
		{
			c[k] = a[i];
			k++;
		}
	}
	for (i = 0;i < 10;i++)
	{
		printf("%d ", a[i]);
	}

	for (i = 0;i < j;i++)
	{
		a[i] = b[i];
	}
	k = 0;
	for (i = j;i < 10;i++)
	{
		a[i] = c[k];
		k++;
	}
	for (i = 0;i < 10;i++)
	{
		printf("%d ", a[i]);
	}
}