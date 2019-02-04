#include<stdio.h>
#include<conio.h>
void main()
{
      int n,rev=0,r;
    printf("enter no");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;

    }
    printf("reverse is %d",rev);
}
