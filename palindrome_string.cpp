#include<iostream>
using namespace std;

int main()
{
	char str[10] = "ganeag";
    	char str1[10];

	int length = 0;
	int i;

	while(str[length] != '\0')
	{
		length++;
	}
	cout << "length = "<< length << endl;
	int length1 = length - 1;
        while(length1>i)
	{
		if(str[i++] != str[length1--])
		{
			cout << "it is not a palindrome" << endl;
			return 1; 
		}
	}
	cout << "it is a palindrome" << endl;
}
