#include<stdio.h>

#include<math.h>
void main()
{
long int n,r,i=0;
long int hdec=0;
printf("enter no");
scanf("%lu",&n);
while(n!=0)
{
r=n%10;
hdec=hdec+(pow(2,i)*r);
n=n/10;
i++;
}
printf("hexdec is %lx",hdec);


}
