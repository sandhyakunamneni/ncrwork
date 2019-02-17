#include<iostream>
using namespace std;
class distance2;
class distance1 
{
	float m,cm;
public:
	distance1(float x,float y)
	{
		m = x;
		cm = y;
		m = m + (cm*0.01);
	}
	friend float add_dist(distance1, distance2);
};
class distance2
{
	float  ft,inch;
public:
	distance2(float x,float y)
	{
		ft = x;
		inch = y;
		ft = ft + (inch / 12);

	}
	friend float add_dist(distance1, distance2);
};
float add_dist(distance1 d1, distance2 d2)
{
	float res = d1.m + ((d2.ft)/3);
	return res;
}
void main()
{
	distance1 d1(4.0f,100.0f);
	distance2 d2(5.0f,12.0f);
	int ch;
	float res = add_dist(d1, d2);
	cout << "nter choice" << endl;
	cin >> ch;
	switch (ch)
	{
	case 1:cout << res;
		break;
	case 2:cout << (res * 3);
		break;

	}
	getchar();
}