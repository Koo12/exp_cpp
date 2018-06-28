#include<iostream>
#include<string>
#include<fstream>
#include<cmath>
#include<sstream>
using namespace std;

int main()
{
	ifstream fin;
	fin.open("/home/koo12-lenovo/桌面/C++实验程序/实验1/lab1_5.cpp");
	ofstream fout;
	fout.open("/home/koo12-lenovo/桌面/C++实验程序/实验1/lala.txt");

	string line;
	while(getline(fin,line))
	{
		cout << line << endl;
		fout << line << endl;
	}
	fin.close();
	fout.close();

	return 0;
}
