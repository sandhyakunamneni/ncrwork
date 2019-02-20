#include<iostream>
using namespace std;
class Student
{
	int rollno;char name[20];char grade;int marks[3];int tmarks;
public:
	friend istream& operator >>(istream &cin, Student &s);
	friend ostream& operator <<(ostream &cin, Student &s);
	friend void caltot(Student s[], int n);
};
istream& operator >> (istream &cin, Student &s)
{
	int i;
	cin >> s.rollno;
	cin >> s.name;
	for (i = 0; i < 3; i++)
	{
		cin >> s.marks[i];
	}
	s.tmarks=0;return cin;
}
ostream& operator >> (ostream &cin, Student &s)
{
	int i;
	cout << s.name;cout << s.rollno;
	for (i = 0; i < 3; i++)
	{ cout << s.marks[i];}
	return cout;
}
void caltot(Student s[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout >> s[i];
		for (int j = 0; j < n; j++)
		{
			s[i].tmarks = s[i].tmarks + s[i].marks[j];
		}
		if (s[i].tmarks > 260)
		{
			s[i].grade = 'A';
			cout << s[i].grade; cout << s[i].tmarks; cout << endl;
		}
		if (s[i].tmarks > 200 && s[i].tmarks < 260)
		{
			s[i].grade = 'B';
			cout << s[i].grade; cout << s[i].tmarks; cout << endl;
		}
		if (s[i].tmarks < 200)
		{
			s[i].grade = 'F';
			cout << s[i].grade; cout << s[i].tmarks; cout << endl;
		}
	}
}
void main()
{
	int i; Student s[3];
	for (int i = 0; i < 3; i++)
	{cin >> s[i];}
	caltot(s, 3);
	cin >> i;
}
