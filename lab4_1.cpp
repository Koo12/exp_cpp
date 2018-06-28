#include<iostream>
#include<string>

using namespace std;

template<typename T>
T Min(T a,T b)
{
	return (a<b)?a:b;
}

int main()
{
	cout << Min(2,3) << endl;
	cout << Min(3.14,4.96) << endl;
	cout << Min("Hello","World") << endl;
}
