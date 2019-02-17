#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int t=10,r;
long int p=500000;
double sa,sh,sq,sm,sd,ca,ch,cq,cm,cd,b;
clrscr();
printf("enter rate of interest");
scanf("%d",&r);
sa=(p*t*r)/100;
sh=(p*(t/2)*r)/100;
sq=(p*(t/4)*r)/100;
sm=(p*(t/12)*r)/100;
sd=(p*(t/365)*r)/100;
b=r/100;
ca=pow(p*(1+b),t);
ch=pow(p*(1+b/2),2*t);
cq=pow(p*(1+b/4),4*t);
cm=pow(p*(1+b/12),12*t);
cd=pow(p*(1+b/365),365*t);
printf("simple interest:\n");
printf("yearly:%lf halfyearly: %lf,quarterly: %lf, monthly: %lf,daily:%lf",sa,sh,sq,sm,sd);
printf("compund interest:\n");
printf("yearly: %lf halfyearly:%lf,quarterly :%lf,monthly: %lf,daily:/lf",ca,ch,cq,cm,cd);
getch();

}