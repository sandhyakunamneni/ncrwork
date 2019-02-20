#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node *next;
};
class sll
{
	struct node *start;
	public:
		sll();
	void insert(int);
	int dele();
	void display();
	//friend void print(struct node);
};
sll::sll()
{
	start = NULL;
}
void sll::insert(int ele)
{
	struct node *temp;
	temp = new node;
	temp->data = ele;
	temp->next = start;
	start = temp;
}
int sll::dele()
{
	struct node *temp;
	int x = -999;
	if (start != NULL)
	{
		temp = start;
		start = start->next;
		x = temp->data;
		delete temp;
	}
	else
	{
		cout << "empty" << endl;
	}
	return x;
}
void print(struct node *temp)
{
	if (temp != NULL)
	{
		print(temp->next);
		cout << temp->data << "->";
	}
}
void sll::display()
{
	struct node *temp;
	temp = start;
	print(start);
	cout << " NULL " << endl;
}

void main()
{
	int ch, ele,x;
	sll s;
	while (1)
	{
		cout << "enter choice" << endl;
		cin >> ch;
		switch (ch)
		{
		case 1: cout << "enter elemenet to be inserted" << endl;
			cin >> ele;
			s.insert(ele);
			break;
		case 2:
			x = s.dele();
			cout << "deleted element is" << x << endl;break;
		case 3:
			s.display();break;
		case 4:exit(0);

		}
	}
	system("pause");
}