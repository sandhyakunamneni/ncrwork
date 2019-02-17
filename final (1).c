#include<stdio.h>
void mask()
{
int n,ch,n1,res;
printf("enter hexadecimal no\n");
scanf("%x",&n);
printf("1.bitwise or\n 2.bitwise xor\n 3.and \n 4.exit\n");
while(1)
{
printf("enter your choice\n");
scanf("%d",&ch);
switch(ch)
{
case(1):printf("enter hexadecimal to mask\n");
scanf("%x",&n1);
res=n|n1;
printf("%x",res);
break;
case(2):printf("enter hexadecimal to mask\n");
scanf("%x",&n1);
res=n^n1;
printf("%x",res);
break;
case(3):printf("enter hexadecimal to mask\n");
scanf("%x",&n1);
res=n&n1;
printf("%x",res);
break;
case(4):exit(0);
}
}
}

void hexa()
{
	char buff[80],hex[80];
	int n,r,d,h,i=1;
       int j=0,dec=0,base=1,count=0,a=1,b;
       unsigned int comp=0;
	printf("enter hex no.");
	scanf("%x", &n);
	r=sprintf(buff, "%d", n);
	printf("%s %d", buff,r);
        d=atoi(buff);
        while(d>0)
        { comp+= (1-d%2)*i;
           i=i*10;
           d=d/2;count++;
         }
b=count%4;
while(b-1!=0)
{
a=1+a*10;
b--;
}
comp=comp+a*((int)pow(10,count));
      printf("binary is %u\n",comp);
       while(comp!=0)
       {
         dec+=(comp%10)*base;
          base=base*2;    
          comp=comp/10; }
printf("decimal val %d",dec);
printf("final hex val %x",dec);
}

void shift()
{
int n,ch,n1,res;
while(1)
{
printf("enter hexadecimal no\n");
scanf("%x",&n);
printf("1.bitwise left\n 2.bitwise right\n 3.exit\n");

printf("enter your choice\n");
scanf("%d",&ch);
switch(ch)
{
case(1):printf("enter no of shifts\n");
scanf("%x",&n1);
res=n<<n1;
printf("%x",res);
break;
case(2):printf("enter no of shifts \n");
scanf("%x",&n1);
res=n>>n1;
printf("%x",res);
break;
case(3):exit(0);
}
}
}



void main()
{
int ch,n;
while(1)
{

printf("1.complementing hexa\n 2.masking\n 3.shifting\n 4.exit\n");

printf("enter your choice\n");
scanf("%d",&ch);
switch(ch)
{
case(1):
hexa();break;
case(2):mask();
break;
case(3):shift();break;
case(4):exit(0);
}
}
getchar();
}

