#include<iostream>
using namespace std;
class insert
{
	int flag = 0, temp,j;
public:
	insert(int a[], int n)
	{
		for (int i = 1;i <= n - 1;i++)
		{
			j = i - 1;
			temp = a[i];
			while (j >= 0 && a[j] > temp)
			{
				a[j + 1] = a[j];
				j--;
			}
			a[j + 1] = temp;
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
	insert is(a, n);
	system("pause");
}