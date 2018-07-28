#include<iostream>
using namespace std;

int swap(int &x, int &y)
{
	x = x+y;
	y = x-y;
	x = x-y;
}

int main()
{
	int a = 30;
	int b = 20;
	swap(a,b);
        cout << a << endl;
	cout << b << endl;
	return 0;
}
