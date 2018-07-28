#include<iostream>
using namespace std;

int main()
{
	int i = 0, count = 0;
	char str[10] = "ganesh";
	char str1;
        while(str[i] != '\0')
	{
		count++;
 		i++;
	}
	cout << "count = " << count << endl;
	int j = 0;
	i = i-1;

	while(j<i)
	{
		str1 = str[i];
		str[i] = str[j];
		str[j] = str1;
		j++;
		i--;
	}
	cout << str << endl;
}
  
   	
