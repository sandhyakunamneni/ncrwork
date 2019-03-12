#include<stdio.h>
#include "mylib.h"
void main()
{
	int nleft = 10, nright = 20;
	int addf = add(nleft, nright);
	int subf = sub(nleft, nright);
	printf("Result from dll - addition (%d),subtraction(%d)", addf, subf);
	getchar();
}