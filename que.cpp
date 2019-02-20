#include<iostream>
using namespace std;
struct quu 
{
	int *q;
	int rear;
	int front;
	int size;
};
class queue
{
	struct quu qu;
public:
	queue();
	void insert(int);
	int del();
	int peek();
	void display();
	void getsize(int);
};
queue::queue()
{
	qu.rear = -1;
	qu.front = -1;
}
void queue::getsize(int n) {
	qu.size = n;
	qu.q = new int[n];
}
void queue::insert(int ele)
{
	qu.rear++;
	if (qu.rear == 0)
	{
		qu.front = 0;
	}
	else if (qu.rear ==( qu.size - 1))
	{
		cout << "overflow";
	}
	else
	{
		qu.q[qu.rear] = ele;
	}
}
int queue::del()
{
	int temp=-999;
			if (qu.rear ==-1)

			{
				cout << "underflow";

			}
			else if (qu.rear == 0 && qu.front==0)
			{
				temp = qu.q[qu.front];
				//qu.q[qu.front] = NULL;
				qu.front = -1;	
				qu.rear = -1;
			}
			else
			{
				temp =qu.q[qu.front];
				//qu.q[qu.front] = NULL;
				qu.front++;
			}
	
		return temp;
	}

	int queue::peek()
	{
		int temp = -999;
				if (qu.rear == -1)

				{
					cout << "underflow";

				}
				else
				{
					temp = qu.q[qu.front];
				}

			return temp;
		}
	void queue::display()
	{
		if (qu.rear = -1)
		{
			cout << "queue is empty" << endl;

		}
		else
		{
			for (int i = qu.front;i <= qu.rear;i++)
			{
				cout << qu.q[i]<<endl;
			}
		}
	}
	void main()
	{
		int n, ch,ele,x;
		queue Q;
		cout << "enter size" << endl;
		cin >> n;
		while (1)
		{
			cout << "enter choice" << endl;
			cin >> ch;
			switch (ch)
			{
			case 1:
				cout << "enter element to be pushed" << endl;
				cin >> ele;
					  Q.insert(ele);break;
			case 2: x=Q.del();
				cout << "deleted is:" << x << endl;
				break;
			case 3:  x=Q.peek();
				cout << "top ele is:" << x << endl;
				break;
			case 4:  Q.display();break;
			case 5:exit(0);
				break;
			}
		}
	}