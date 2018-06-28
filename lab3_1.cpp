#include<iostream>
#include<string>
using namespace std;

class CPoint
{
private:
	int x,y;	//记录点的横纵坐标
	static int nCount;	//nCount用于保存点的个数
public:
	CPoint(int px=0,int py=0)
	{
		x=px;
		y=py;
	}
	int GetX()
	{
		return x;
	}
	int GetY()
	{
		return y;
	}
	void SetX(int px)
	{
		x=px;
	}
	void SetY(int py)
	{
		y=py;
	}

	virtual void ShowPoint()
	{
		cout << "<" << x << "," << y << ">" << endl;
	}
};

class CThreePoint:public CPoint
{
private:
	int z;
public:
	CThreePoint(int px,int py,int pz):CPoint(px,py)
	{
		z=pz;
	}
	int GetZ()
	{
		return z;
	}
	void SetZ(int pz)
	{
		z=pz;
	}

	virtual void ShowPoint()
	{
		cout << "<" << GetX() << "," << GetY() << "," << z << ">" << endl;
	}
	
};

enum ColorType{White,Black,Red,Green,Blue,Yellow,Magenta,Cyan};

class Shape
{
protected:
	ColorType color;
public:
	Shape(ColorType c)
	{
		color=c;
	}
	Shape(){}
	virtual void draw()
	{
		cout << "This is a shape" << endl;
	}
};

class XD:public Shape
{
protected:
	ColorType color;
public:
	XD(ColorType c)
	{
		color=c;
	}
	virtual void draw()
	{
		cout << "This is a line" << endl;
	}
};

class Rectangle:public Shape
{
protected:
	ColorType color;
public:
	Rectangle(ColorType c)
	{
		color=c;
	}
	virtual void draw()
	{
		cout << "This is a rectangle" << endl;
	}
};

class Circle:public Shape
{
protected:
	ColorType color;
public:
	Circle(ColorType c)
	{
		color=c;
	}
	virtual void draw()
	{
		cout << "This is a circle" << endl;
	}
};

int main()
{
/*	CPoint p1(2,3);
	p1.ShowPoint();
	
	CThreePoint sp1(4,5,6);
	p1=sp1;
	p1.ShowPoint();
	//sp1.ShowPoint();
*/	
	Shape l;
	Circle c(Black);
//	l.draw();
//	c.draw();
	l=c;
	l.draw();
	return 0;
}
