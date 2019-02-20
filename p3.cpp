#include<iostream>
using namespace std;
class student
{
	char name[30];
	int salary;

public:
	void get_data()
	{
		cin >> name;
		cin >> salary;

	}
	friend  ostream& operator<<(ostream& cout, student s);

	friend void get_result(student[]);
};

ostream& operator<<(ostream& cout, student s)
{
	cout << s.name << endl;
	cout << s.salary << endl;


	return cout;

}

int main()
{
	student s1[2];
	int i;
	for (i = 0;i < 2;i++)
	{
		s1[i].get_data();
	}
	for (i = 0;i < 2;i++)
	{
		cout << s1[i] << endl;
	}
	system("pause");
	return 0;
}

Displaying p_4.cpp.