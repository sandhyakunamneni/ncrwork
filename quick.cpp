#include<iostream>
using namespace std;
void quicksort(int a[], int low, int high) {
	int pivot, i, j, temp;
	pivot = a[low];
	i = low + 1;
	j = high;
	if (low < high)
	{
		while (1)
		{
			while (i <= high&&a[i] < pivot)
				i++;
			while (a[j] > pivot)
				j--;
			if (i < j)
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
			else
				break;
		}
		temp = a[low];
		a[low] = a[j];
		a[j] = temp;
		quicksort(a, low, j - 1);
		quicksort(a, j + 1, high);
	}
}

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
	quicksort(a, 0, n - 1);
	cout << "elements are:" << endl;
	for (i = 0;i < n;i++)
	{
		cout << a[i];
	}
	system("pause");
}