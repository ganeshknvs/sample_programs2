#include<iostream>
#include<string>

using namespace std;

int swap(int &x, int &y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}

int main()
{
    int a = 10;
    int b = 20;
    swap(a,b);
    cout << a<<endl;
    cout << b<<endl;	
    return 0;
}
