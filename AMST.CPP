#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int n,r,count=0,x,sum=0,temp;
clrscr();
printf("enter a no");
scanf("%d",&n);
temp=n;
x=n;
while(x!=0)
{
r=x%10;
count++;
x=x/10;
}
printf("%d",count);
while(n!=0)
{
r=n%10;
sum=sum+pow(r,count);
n=n/10;
}
if(sum==temp)
{
printf("amstrong no");
}
else
{
printf("not amstrong");
}
getch();
}