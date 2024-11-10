#include <iostream>
using namespace std;
class Stack
{
private:
	int tos;
	int size;
	int *st;
	static int counter;

public:
	friend void viewContent(Stack &x);
	// Stack(Stack &z);
	Stack(int n = 10)
	{
		tos = 0;
		size = n;
		st = new int[size];
		counter++;
		cout << "Constructor" << endl;
	}

	~Stack()
	{
		delete[] st;
		cout << "Destructor" << endl;
		counter--;
	}

	void push(int);
	int pop();
	static int getSatckNo(void)
	{
		return counter;
	}
};

int Stack::counter = 0;

void viewContent(Stack &x)
{
	for (int i = 0; i < x.tos; i++)
	{
		cout << x.st[i] << endl;
	}
}
// Stack::Stack(Stack &z)
// {
// 	tos = z.tos;
// 	size = z.size;
// 	st = new int[size]; // new allocation
// 	for (int i = 0; i < tos; i++)
// 		st[i] = z.st[i]; // only copy values

// 	counter++;
// }

void Stack::push(int n)
{
	if (tos == size)
	{
		cout << "The stack is full" << endl;
	}
	else
	{
		st[tos] = n;
		tos++;
	}
}

int Stack::pop()
{
	int retVal;
	if (tos == 0)
	{
		cout << "The stack is empty" << endl;
		retVal = -1;
	}
	else
	{

		tos--;
		retVal = st[tos];
	}
	return retVal;
}

int main()
{
	Stack s1(10);
	s1.push(1);
	s1.push(2);
	s1.push(3);
	s1.push(1);
	s1.push(2);
	s1.push(3);
	s1.push(1);
	s1.push(2);
	s1.push(3);
	s1.push(2);
	s1.push(3);
	viewContent(s1);
	cout << "Counter = " << Stack::getSatckNo() << endl;
}