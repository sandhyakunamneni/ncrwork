#include<iostream>
using namespace std;
class polar
{
	static int count;
public:
	polar()
	{

		count++;
		//cout << count << endl;
	}
	polar(int p)
	{
		count++;
		//cout << count << endl;
	}
	polar(int x, int y)
	{
		count++;
		//cout << count << endl;
	}
	polar(polar &c)
	{
		count++;
		//cout << count << endl;
	}
	~polar()
	{
		count--;
		cout << count << endl;
	}
};
int polar::count;
int  main()
{
	polar p1;
	polar p2(5);
	polar p3(3, 2);
	{
		polar p4(2, 3);
	}
	polar p5(p1);
	{
		polar p6(p1);
	}
	int i;
	cin >> i;
}