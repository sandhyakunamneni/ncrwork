#include<stdio.h>
#include<conio.h>
void main()
{
long int bsal,tsal;
clrscr();
printf("enter salary\n");
scanf("%lu",&bsal);
if(bsal>1&&bsal<4000)
{
tsal=bsal+(0.1*bsal)+(0.5*bsal);
}
else if(bsal>4001&&bsal<8000)
{
tsal=bsal+(0.2*bsal)+(0.6*bsal);
}
else if(bsal<8001>bsal<12000)
{tsal=bsal+(2.5*bsal)+(0.7*bsal);
}
else
{ tsal=bsal+(0.3*bsal)+(0.8*bsal);
}
printf("total salary is: %lu",tsal);
getch();
}