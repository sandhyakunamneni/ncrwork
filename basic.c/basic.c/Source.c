#include<stdio.h>
void main()
{
	int a[8] = { 10,20,30,40,50,60,70,80 };
		printf("%d\n", a);
		printf("%d\n", a + 2);
		printf("%d\n", *a);
		printf("%d\n", *(a + 2));
	printf("%d\n", (*a + 2));
	getch();
}