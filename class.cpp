#include<iostream>
using namespace std;

class A
{
	public:
	int a;
	int b;
	A()
	{
		a = 0;
		b = 0;
		cout << "Default a = " << a << endl;
		cout << "default b = " << b << endl;
	}
	A(int x, int y)
	{
		a = x;
		b = y;
		cout << "parameterised a = " << a << endl;
		cout << "parameterised b = " << b << endl;
	}
	A(const A &a2)
	{
		a = a2.a;
		b = a2.b;
		cout << "copy constructor a = " << a << endl;
		cout << "copy constructor b = " << b << endl;
	}
};

int main()
{
	A a;
	A a1(10,20);
	A a2 = a1;
	return 0;
}
