#include<iostream>
using namespace std;
class select
{
	int flag = 0, temp;
public:
	select(int a[], int n)
	{
		for (int i = 0;i < n-1;i++)
		{
			int loc = i, j = i + 1;
			while (j <= n - 1)
			{
				if (a[j] < a[loc])
				{
					loc = j;
				}
					j++;
			}
			temp = a[i];
			a[i] = a[loc];
			a[loc] = temp;
		}
		for (int i = 0;i < n;i++)
		{
			cout << a[i];
		}

	}
};
void main()
{
	int i, n;
	int a[100];
	cout << "enter no of elements" << endl;
	cin >> n;
	cout << "enter elements" << endl;
	for (i = 0;i < n;i++)
	{
		cin >> a[i];
	}
	select ss(a, n);
	system("pause");
}