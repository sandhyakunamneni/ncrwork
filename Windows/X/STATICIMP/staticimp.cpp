#include<stdio.h>
#include<iostream>
using namespace std;
#include "E:\windows\files\X\STATIC\mystatic.h"
void main()
{
	double a,b;
	cout << "enter numbers\n";
	cin >> a >> b;
	printf("sum is %lf", MyMathFuncs::Add(a, b));
	printf("sum is %lf", MyMathFuncs::Sub(a, b));
	printf("sum is %lf", MyMathFuncs::Mul(a, b));
	printf("sum is %lf", MyMathFuncs::Div(a, b));
	system("pause");
}