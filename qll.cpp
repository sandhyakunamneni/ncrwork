#include<iostream>
using namespace std;
struct node
{
	struct node *next;
	int data;
};
class qll
{
	struct node *start;
public:
	qll();
	void insertbeg(int);
	int deleteend();
	void display();

};
qll::qll()
{
	start = NULL;
}
void qll::insertbeg(int ele)
{
	struct node *temp;
	temp = new node;
	temp->data = ele;
	temp->next = start;
	start = temp;
}
int qll::deleteend()
{
	int x = -999;
	if (start != NULL)
	{ 
		if (start->next == NULL)
		{
			x = start->data;
			start = NULL;
		}
		else
		{
			struct node *curr;
			curr = start;
			while (curr->next->next != NULL)
			{
				curr = curr->next;
			}
			x = curr->next->data;
			curr->next = NULL;
		}
	}
	else
	{
		cout << "list is empty";
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
void qll::display()
{
	struct node *temp;
	temp = start;
	print(start);
	cout << " NULL " << endl;
}
void main()
{
	int ch, ele, x;
	qll q;
	while (1)
	{
		cout << "enter choice" << endl;
		cin >> ch;
		switch (ch)
		{
		case 1: cout << "enter elemenet to be inserted" << endl;
			cin >> ele;
			q.insertbeg(ele);
			break;
		case 2:
			x = q.deleteend();
			cout << "deleted element is" << x << endl;break;
		case 3:
			q.display();break;
		case 4:exit(0);

		}
	}
	system("pause");
}