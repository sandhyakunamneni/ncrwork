#include<stdio.h>
#include<conio.h>
void main()
{
int n,r,sum=0;
clrscr();
printf("enter a number");
scanf("%d",&n);
while(n!=0)
{
r=n%10;
sum=sum+r;
n=n/10;
}
printf("sum = %d",sum);
getch();
}