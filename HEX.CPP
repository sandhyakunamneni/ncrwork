#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[100]="";
char s[100];
int i=0,j,count=0;
clrscr();
printf("enter hexa");
gets(s);
while(s[i]!='\0')
{
switch(s[i])
{
case('0'):{strcat(a,"0000");break;}
case('1'):{strcat(a,"0001");break;}
case('2'):{strcat(a,"0010");break;}
case('3') :{strcat(a,"0011");break;}
case('4'):{strcat(a,"0100");break;}
case('5'):{strcat(a,"0101");break; }
case('6'):{strcat(a,"0110");break; }
case('7'):{strcat(a,"0111");break;}
case('8'):{ strcat(a,"1000");break;}
case('9'):{ strcat(a,"1001");break;}
case('a'):{ strcat(a,"1010");break;}
case('b'):{ strcat(a,"1011");break; }
case('c'):{ strcat(a,"1100");break;}
case('d'):{ strcat(a,"1101");break;}
case('e'):{ strcat(a,"1110");break;}
case('f'):{strcat(a,"1111");break; }
}
i++;
}
puts(a);
j = strlen(a);
for (i = j;i >= 0;i--)
{
	if (a[i] == '0')
	{
		a[i] = '1';
	}
	else
	{
		a[i] = '0';
	}
}
puts(a);




getch();
}