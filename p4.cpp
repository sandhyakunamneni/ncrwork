#include<iostream>
using namespace std;
class complex
{
	int real, imag;
public:
	complex()
	{
		real = 0;
		imag = 0;
	}
	complex(int a)
	{
		real = a;
		imag = 0;
	}
	complex(int a, int b)
	{
		real = a;
		imag = b;
	}
	complex operator+(complex c)
	{
		complex res;
		res.real = real + c.real;
		res.imag = real + c.imag;
		return res;
	}
	complex operator-(complex c)
	{
		complex res;
		res.real = real -c.real;
		res.imag = real - c.imag;
		//cout << res.real << res.imag;
		return res;
	}
	complex operator-()
	{
		complex res;
		res.real = -real;
		res.imag = -imag;
		return res;
	}
	complex operator++()
	{
		complex temp;
		temp.real = ++real;
		temp.imag = ++imag;
		return temp;
	}
	complex operator++(int x)
	{
		complex temp;
		temp.real = real++;
		temp.imag = imag++;
		return temp;


	}
	
	complex operator,(complex c)
	{

		return *this;
	}
	complex operator=(complex c)
	{
		complex temp;
		temp .real = c.real;
		temp.imag = c.imag;
		return temp;
	};
	friend istream& operator>>(istream& cin,  complex &c);
	friend ostream& operator<<(ostream& cout, const complex &c);
	
};
 istream& operator>>(istream& cin, complex &c)
{
	cin >> c.real;
	cin >> c.imag;
	return cin;
}

 ostream& operator<<(ostream& cout, const complex &c)
{
	cout << c.real;
	cout << c.imag;
	return cout;
}
void main()
{
	complex c1(7,7), c2(2,5), c3,c4,c5,c6;
	c3 = c1 + c2;
	c4 = c1 - c2;
	c5 = c1;
	c6 = ++c1;
	cout<< c6 << endl;
	system("pause");
}