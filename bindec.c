#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
long int n,r,i=0;
long int dec=0;
printf("enter no");
scanf("%lu",&n);
while(n!=0)
{
r=n%10;
dec=dec+(pow(2,i)*r);
n=n/10;
i++;
}
printf("dec is %lu",dec);
getch();

}
