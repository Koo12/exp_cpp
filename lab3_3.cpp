#include<iostream>
#include<string>
using namespace std;

class vehicle
{
public:
	virtual void Run()
	{
		cout << "vechicle run" << endl;
	}
	virtual void Stop()
	{
		cout << "vechicle stop" << endl;
	}
};

class bicycle:public vehicle
{
public:
	virtual void Run()
	{
		cout << "bicycle run" << endl;
	}
	virtual void Stop()
	{
		cout << "bicycle stop" << endl;
	}
};

class motorcar:public vehicle
{
public:
	virtual void Run()
	{
		cout << "motocar run" << endl;
	}
	virtual void Stop()
	{
		cout << "motocar stop" << endl;
	}
};

class motorcycle:public motorcar
{
public:
	virtual void Run()
	{
		cout << "motorcycle run" << endl;
	}
	virtual void Stop()
	{
		cout << "motorcyle stop" << endl;
	}
};

int main()
{
	
	vehicle *v;
	bicycle b;
	v=&b;
	v->Run();
	return 0;
}
