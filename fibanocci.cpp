#include<iostream>
using namespace std;

int main()
{
	int n = 10, result;
	int t = 0, t1 = 1;
        for(int i= 2; i<=n; i++)
	{
		result = t+t1;
		t = t1;
		t1  = result;
	
	}
	cout << "result = " << result << endl;
}

	
