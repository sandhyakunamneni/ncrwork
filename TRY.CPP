#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
int i,j,min,maj,n,sum=0;
int b[100];
clrscr();
printf("enter numbers");
for(i=0,j=0;i<10;i++)
{
scanf("%d",&b[i]);
if(b[i]>0)
{
 sum=sum+b[i];
 j++;
 }
 else
 {
 break;
 }
 }
 min=b[0];
 maj=b[0];
for(i=0;i<j;i++)
{
if(b[i]<min)
{
min=b[i];
}
else if(b[i]>maj)
{
maj=b[i];
}
}
printf("sum is %d,min=%d,maj=%d,count=%d",sum,min,maj,j);
getch();
}
