#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	long int s=0;
	printf("enter dec");
	scanf("%d", &n);
	itob(n, s);
	itoh(n, s);
	getchar();
}
itob(int n, int s)
{
	int r,i=1;
	while (n != 0)
	{
		r = n % 2;
		s = s  + r*i;
		n = n / 2;
		i = i * 10;
	}
	printf("%ld\n", s);
}
itoh(int n, int s)
{
	printf("%x\n", n);
}