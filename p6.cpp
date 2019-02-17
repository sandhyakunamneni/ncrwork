#include<iostream>
using namespace std;
class point
{
	int x, y;
public:
	point(int a, int b)
	{
		x = a; y = b;
	}
	friend float dist(point , point);
};
float dist(point p1, point p2)
{
	float res;
	float var;
	var = pow((p1.x - p2.x),2) + pow((p1.y - p2.y),2);
	res = sqrt(var);
	return res;
}
void main()
{
	point p1(0,0), p2(0, 1);
	float res=dist(p1, p2);
	cout << res << endl;
	getchar();
}