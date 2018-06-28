#include<iostream>
using namespace std;

int main()
{
	int row,col;
	//为行指针分配空间
	int **arr=new int *[3];
	for(int i=0;i<3;i++)
	{
		arr[i]=new int[3];
	}

	//输入二维数组的数
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin >> arr[i][j];
		}
	}

	//将二维数组转置
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout << arr[j][i]<< " ";
		}
		cout << endl;
	}

	//释放二维数组(反过来)
	for(int i=0;i<3;i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
	
	return 0;
}
