#include<iostream>
#include<cmath>
using namespace std;

class CPoint
{
private:
	int x,y;
	static int nCount;	//用于保存点的个数
public:
	CPoint(int px=0,int py=0)
	{
		x=px;
		y=py;
	}
	//CPoint(CPoint&){}
	
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
	void ShowPoint()
	{
		cout << "<" << x << "," << y << ">" << endl;
	}
};

class CLine
{
private:
	CPoint pt1,pt2;	//用于表示线段的起点和终点
public:
	CLine();
	CLine(int x1,int y1,int x2,int y2)
	{
		pt1.SetX(x1);
		pt1.SetY(y1);
		pt2.SetX(x2);
		pt2.SetY(y2);
	}

	CLine(CPoint p1,CPoint p2):CPoint(p1),CPoint(p2)
	{}

	double Distance()
	{
		double distance;
		
		double pf;
		pf=(pt1.GetX()-pt2.GetX())*(pt1.GetX()-pt2.GetX())+(pt1.GetY()-pt2.GetY())*(pt1.GetY()-pt2.GetY());
		distance=sqrt(pf);

		return distance;
	}

	void ShowLine()
	{
		cout << "<" << pt1.GetX() << "," << pt1.GetY() << ">";
		cout << "<" << pt2.GetX() << "," << pt2.GetY() << ">"; 
	}
};	

int main()
{
	CPoint pt1(0,0),pt2(3,4);
	
	CLine l1(pt1,pt2);

	cout << "线段的长度为：" << l1.Distance() << endl;
	
	l1.ShowLine();
	return 0;
}
