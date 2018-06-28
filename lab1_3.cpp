#include<iostream>
using namespace std;

int main()
{
	double mat[3][3];
	cout << "请输入矩阵\n";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin >> mat[i][j];
		}
	}

	cout << "对该矩阵进行转制为\n";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout << mat[j][i] << "\t";
		}
		cout << endl;
	}
	return 0;
}
