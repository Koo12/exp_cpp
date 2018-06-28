#include<iostream>
#include<string>
#include<vector>
#include<cstdio>
#include<algorithm>

using namespace std;

/*	a实现方式
int main()
{
	vector<int> vec;
	int count=0;
	
	while(true)
	{
		int number;
		cin >> number;
		if(number==0)
		{
			break;
		}
		vec.push_back(number);
		count++;
	}

	for(int i=0;i<count;i++)
	{
		cout << vec[i] << " ";
	}

	cout << endl;
	
	return 0;
}

*/

/*	b实现方式
int main()
{
	vector<int> vec;
	int count=0;

	while(true)
	{
		int number;
		cin >> number;
		if(number==0)
		{
			break;
		}
		vec.push_back(number);
		count++;
	}	
	
	vector<int>::iterator it;
	for(it=vec.begin();it!=vec.end();it++)
	{
		cout << *it << " ";
	}

	cout << endl;
	
	return 0;
}

*/


void myfunction(int i)
{
	cout << " " << i;
}

int main()
{
	vector<int> vec;
	int count=0;

	while(true)
	{
		int number;
		cin >> number;
		if(number==0)
		{
			break;
		}
		vec.push_back(number);
		count++;
	}

	for_each(vec.begin(),vec.end(),myfunction);

	cout << endl;
	return 0;
}
