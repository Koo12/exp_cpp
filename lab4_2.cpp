#include<iostream>
#include<string>

using namespace std;

const int SIZE=100;
template<class T>
class Stack
{
private:
	T stack[SIZE];
	int tos=0;
public:
	void Push(T n)
	{
		stack[tos]=n;
		tos++;
	}
	T Pop()
	{
		stack[tos]=0;
		tos--;
	}
	int getTos()
	{
		return tos;
	}
	T * getStack()
	{
		return stack;
	}
};

int main()
{
	Stack<int> stack;
	int a,b,c;
	a=1;
	b=2;
	c=3;
	
	stack.Push(a);
	stack.Push(b);
	stack.Push(c);
	
	int number=stack.getTos();
	for(int i=0;i<number;i++)
	{
		cout << stack.getStack()[i] << " ";
	}

	cout << endl;
	return 0;
}
