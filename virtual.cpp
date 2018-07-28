#include<iostream>
using namespace std;

class A
{
	public:
	virtual void fun1()
	{
		cout << "base class function"<<endl;
	}
	void fun2()
	{
		cout << "base class function without virtual" << endl;
	}
};

class B:public A
{
	public:
	void fun1()
	{
		cout << "Derived class function is called" <<endl;

	}
	void fun3()
	{
		cout << "derived class function 3" << endl;
	}
};

int main()
{
	A *a = new B;
	B *b = dynamic_cast<B*>(a);
	a->fun1();
	a->fun2();
	b->fun3();
	return 0;
}
