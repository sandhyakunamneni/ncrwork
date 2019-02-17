#include<iostream>
using namespace std;
class S
{
public:
	void swap(int &i, int &j)
	{
		i = i + j;j = i - j;i = i - j;
		cout << "a and b are" << i << "," << j << endl;
	}
	void swap1(int i, int j)
	{
		i = i + j;j = i - j;i = i - j;
		cout << "a and b are" << i << "," << j<< endl;
	}
};
void main()
{
	int a = 2, b = 3;
	S s;
	s.swap(a, b);
	//cout << "a and b are" << a << "," << b << endl;
	s.swap1(a, b);
	//cout << "a and b are" << a << "," << b << endl;

	getchar();
}