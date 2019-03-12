#include<stdio.h>
#include<iostream>
using namespace std;
#include "mylib.h"
void main()
{
	int nleft , nright ;
	printf("enter values\n");
	cin >> nleft;
	cin >> nright;
	int addf = add(nleft, nright);
	int subf = sub(nleft, nright);
	printf("Result from dll - addition (%d),subtraction(%d)", addf, subf);
	system("pause");
}