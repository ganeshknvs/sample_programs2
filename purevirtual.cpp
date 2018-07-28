#include<iostream>
using namespace std;

class A
{
	public:
	virtual void fun() = 0;
	virtual void fun1()
	{
		cout << "calling a base class function" << endl;
	}
	void fun2()
	{
		cout << "calling a base function 2" << endl;
	}
};

class B : public A
{
	public:
	void fun2()
	{
		cout << "calling derived class function1" << endl;
	}
	void fun()
	{
		cout << "calling a derived class function" << endl;
	}
};

int main()
{
	A *a = new B;
	B *b;
	a->fun1();
        a->A::fun1();
	b = dynamic_cast<B*>(a);
	a->fun2();
	return 0;
}
