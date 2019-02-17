#include<stdio.h>
#include<conio.h>
void main()
{
	int a[] = { 10,20,30,40,50,60,70,80 };
	printf("%u\n",a);
	printf("%u\n",a+2 );
	printf("%d\n",*(a+2) );
	printf("%u\n", (*a+2));
	printf("%d\n",*a);
	getchar();
}