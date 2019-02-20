#include<iostream>
#include<string.h>
using namespace std;
struct stack1
{
	int top;
	char *s;
	int size;
};
class stackk
{
	struct stack1 sta;
public:
	stackk();
	void push(int);
	int pop();
	int peek();
	bool isEmpty();
	bool isFull();
	void display();
	void getsize(int);
	int checkprec(char);
};
stackk::stackk()
{
	sta.top = -1;
	sta.size = 0;
	sta.s = NULL;
}
void stackk::getsize(int n)
{
	sta.size = n;
	sta.s = new char[n];
}
bool stackk::isFull()
{
	return (sta.top == sta.size - 1);
}
bool stackk::isEmpty()
{
	return (sta.top == -1);
}
void stackk::push(int ele)
{
	if (!isFull())
	{
		sta.s[++sta.top] = ele;//sta.sta[top
	}
	else
	{
		cout << "stack is full" << endl;
	}
}
int stackk::pop()
{
	int x = -999;
	if (!isEmpty())
	{
		x = sta.s[sta.top--];
	}
	else
	{
		cout << "stack is empty" << endl;
	}
	return x;
}
int stackk::peek()
{

	int x = -999;
	if (!isEmpty())
	{
		x = sta.s[sta.top];
	}
	else
	{
		cout << "stack is empty" << endl;
	}
	return x;

}
int stackk::checkprec(char c)
{
	int p;
	switch (c)
	{
	case '(':
	case '[':
	case '{':p = 1;
		break;
	case '+':
	case '-':p = 2; break;
	case '*':
	case '/':p = 3;
		break;
	}
	return p;

}

void main()
{
	char str[100], op[100];
	int n,i,j=0,x,ch;
	stackk st;
	cout << "enter n" << endl;
	cin >> n;
	st.getsize(n);
	cout << "enter string" << endl;
	cin >> str;
//reversing string 
	_strrev(str);
	for (int i = 0;str[i] != '\0';i++)
	{
		switch (str[i])
		{
		case '(':str[i] = ')';break;
		case '[':str[i] = ']';break;
		case '{':str[i] = '}';break;
		case ')':str[i] = '(';break;
		case ']':str[i] = '[';break;
		case '}':str[i] = '{';break;
		}
	}
//infix to postfix
	for (i = 0; str[i] != '\0'; i++)
	{
		ch = str[i];
		switch (ch)
		{

		case '+':
		case '-':
		case '*':
		case '/':
			if (st.isEmpty())
			{
				st.push(ch);
			}
			else if (st.checkprec(ch) > st.checkprec(st.peek()))
			{
				st.push(ch);
			}
			else
			{
				x = st.pop();
				op[j++] = x;
				st.push(ch);
			}
			break;
		case '[':
		case '(':
		case '{':
			st.push(ch);
			break;
		case ']':
		case '}':
		case ')':
			if (ch == ']')
			{
				while (st.peek() != '[')
				{
					x = st.pop();
					op[j++] = x;
				}
				x = st.pop();
			}
			if (ch == ')')
			{
				while (st.peek() != '(')
				{
					x = st.pop();
					op[j++] = x;
				}
				x = st.pop();
			}
			if (ch == '}')
			{
				while (st.peek() != '{')
				{
					x = st.pop();
					op[j++] = x;
				}
				x = st.pop();
			}
			break;
		default:
		{
			op[j++] = ch;
		}
		}
	}
	while (!st.isEmpty())
	{
		op[j++] = st.pop();
	}
	op[j] = '\0';
//re-reversing
	_strrev(op);

	cout << op;
	system("pause");
}