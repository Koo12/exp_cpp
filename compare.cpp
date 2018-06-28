#include<iostream>
using namespace std;

int Maxl(int a,int b);
int Maxl(int a,int b,int c);
double Maxl(double a,double b);
double Maxl(double a,double b,double c);

int main()
{
	int ds;
	ds=Maxl(1,2);
	cout << "2个中的大数为：" << ds << endl;
	ds=Maxl(1,2,3);
	cout << "3个中的大数为：" << ds << endl;
	
	double fds;
	fds=Maxl(3.1,4.2);
	cout << "2个中的大数为：" << fds << endl;
	fds=Maxl(3.1,4.2,5.6);
	cout << "3个中的大数为：" << fds << endl;
	
	return 0;
}

int Maxl(int a,int b)
{
	if(a>=b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

int Maxl(int a,int b,int c)
{
	int d;
	if(a>=b)
	{
		d=a;
	}
	else
	{
		d=b;
	}

	if(d<c)
	{
		d=c;
	}
	return d;
}

double Maxl(double a,double b)
{
	if(a>=b)
	{
		return a;
	}
	else
	{
		return b;
	}

}

double Maxl(double a,double b,double c)
{
	double d;
	if(a>=b)
	{
		d=a;
	}
	else
	{
		d=b;
	}

	if(d<c)
	{
		d=c;
	}
	return d;

}
