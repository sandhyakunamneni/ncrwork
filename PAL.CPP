#include<stdio.h>
#include<conio.h>
void main()
{
int n,r,rev=0,temp;
clrscr();
printf("enter a no");
scanf("%d",&n);
temp=n;
while(n!=0)
{
r=n%10;
rev=rev*10+r;
n=n/10;
}
if(temp==rev)
{
printf("palindrome");
}
else
{
printf("not palindrome");
}
getch();
}