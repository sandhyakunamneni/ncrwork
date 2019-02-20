#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node *prev;
	struct node *next;
};
class __DLL__
{
	struct node *start;
public:
	__DLL__();
	void insertfirst(int);
	void insertlast(int);
	void insertafter(int, int);
	void insertbefore(int, int);
	int deletefirst();
	int deletelast();
	void deletespec(int);
	void travforw();
	void travback();
};
__DLL__::__DLL__()
{
	start = NULL;
}
void __DLL__::insertfirst(int ele)
{
	struct node *temp;
	temp = new node;
	temp->data = ele;
	temp->prev = NULL;
	temp->next = start;
	if (start != NULL)
	{
		start->prev = temp;
	}
	start = temp;
}
void __DLL__::insertlast(int ele)
{
	struct node *temp;
	temp = new node;
	temp->data = ele;
	temp->next = NULL;
	if (start == NULL)
	{
		temp->prev = NULL;
		start = temp;
	}
	else
	{
		struct node *curr;
		curr = start;
		while (curr->next != NULL)
		{
			curr = curr->next;
		}
		temp->prev = curr;
		curr->next = temp;
	}
}
void __DLL__::insertafter(int sele, int ele)
{
	if (start != NULL)
	{
		struct node *temp;
		struct node *curr;
		curr = start;
		//cout << curr;
		while (curr->next!= NULL && curr->data != sele)
		{
			curr = curr->next;
		}
		if (curr->next!= NULL)
		{
			temp = new node;
			temp->data = ele;
			temp->prev = curr;
			temp->next = curr->next;
			if ((curr->next) != NULL)
			{
				curr->next->prev = temp;
				//curr->next = temp;
			}
			curr->next = temp;
		}
		else
		{
			cout << "sele not found" << endl;
		}
	}
	else
	{
		cout << "list is empty" << endl;
	}
}

void __DLL__::insertbefore(int sele, int ele)
{
	struct node *curr;
	if (start != NULL)
	{
		curr = start;
		while (curr != NULL && curr->data != sele)
		{
			curr = curr->next;
		}
		if (curr != NULL)
		{
			struct node *temp;
			temp = new node;
			temp->data = ele;
			temp->prev = curr->prev;
			temp->next = curr;
			if (curr->prev != NULL)
			{
				curr->prev->next = temp;
			}
			else
				start = temp;
			curr->prev = temp;
		}

		else
		{
			cout << "sele not found" << endl;
		}
	}
	else
	{
		cout << "list is empty" << endl;
	}
}
int __DLL__ :: deletefirst()
{
	int x = -1;
	if (start != NULL)
	{
		struct node *temp;
		temp = start;
		if (temp->next != NULL)
		{
			temp->next->prev = NULL;

		}
		start = temp->next;
		x = temp->data;
		delete temp;
	}
	else
	{
		cout << "list is empty" << endl;
	}
	return x;

}
int __DLL__::deletelast()
{
	int x = -1;
	//struct node *temp;
	if (start != NULL)
	{
		struct node *temp;
		struct node *curr;
		curr = start;
		while (curr->next != NULL)
		{
			curr = curr->next;
		}
		x = curr->data;
		if (curr->prev != NULL)
		{
			curr->prev->next = NULL;
		}
		else
			start = NULL;
		//delete temp;
	}
	else
	{
		cout << "list is empty" << endl;
	}
	return x;
}
void __DLL__ :: deletespec(int ele)
{
	if (start != NULL)
	{
		struct node *curr;
		curr = start;
		while (curr != NULL && curr->data != ele)
		{
			curr = curr->next;
		}
		if (curr != NULL)
		{
			if (curr->prev != NULL)
			{
				curr->prev->next = curr->next;
			}
			else
			{
				start = curr->next;
			}
			if (curr->next != NULL)
			{
				curr->next->prev = curr->prev;
			}
			delete curr;
		}
		else
			cout << "ele not found" << endl;
	}
	else
		cout << "empty";
}
void __DLL__::travback()
{
	if (start != NULL)
	{
		struct node *curr;
		curr = start;
		while (curr->next != NULL)
		{
			curr = curr->next;
		}
		while (curr != NULL)
		{
			cout << curr->data;
			curr = curr->prev;
		}
	}
}
void __DLL__::travforw()
{
	struct node *curr;
	curr = start;
	while (curr != NULL)
	{
		cout << curr->data;
		curr = curr->next;
	}
}
void main()
{
	int ch, x, ele,sele;
	__DLL__ d;
	while (1)
	{
		cout << "enter choice" << endl;
		cin >> ch;
		switch (ch)
		{
		case 1:
			cout << "enter element " << endl;
			cin >> ele;
			d.insertfirst(ele);break;
		case 2:
			cout << "enter element " << endl;
			cin >> ele;
			d.insertlast(ele);break;
		case 3:
			cout << "enter element " << endl;
			cin >> ele;
			cout << "enter selected element" << endl;
			cin >> sele;
			d.insertafter(ele, sele);
			break;
		case 4:
			cout << "enter element " << endl;
			cin >> ele;
			cout << "enter selected element" << endl;
			cin >> sele;
			d.insertbefore(ele, sele);break;
		case 5:x = d.deletefirst();
			cout << "deleted ele is" << x;
			break;
		case 6:x = d.deletelast();
			cout << "deleted ele is" << x;
			break;
		case 7:
			cout << "enter element " << endl;
			cin >> ele;
			d.deletespec(ele);break;
		case 8:d.travforw();break;
		case 9:d.travback();break;
		case 10:exit(0);
		}
	}
	system("pause");
}