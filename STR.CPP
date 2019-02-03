#include<stdio.h>
#include<conio.h>
void main()
{
int i,count1=0,count2=0,count3=0,count4=0;
char s[100];
clrscr();
printf("enter characters");
scanf("%[^\n]",s);
for(i=0;s[i]!=0;i++)
{
if(s[i]>=97&&s[i]<=122)
{
count1++;
}
else if(s[i]>=48&&s[i]<=57)
{
count2++;
}
else if(s[i]==' ')
{
count3++;
}
else if(s[i]=='	')
{
count4++;
}
}
printf("count1=%d,count2=%d,count3=%d,count4=%d",count1,count2,count3,count4);
getch();
}