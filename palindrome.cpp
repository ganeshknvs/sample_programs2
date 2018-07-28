#include<iostream>

using namespace std;
int main()
{
   int a = 124; 
   int b = a;
   int reverse = 0;
   while(a != 0)
   {
      int digit = a%10;
      reverse = (reverse * 10) + digit;
      a = a/10; 
   }
   cout << reverse << endl;
   if(b == reverse)
   {
       cout << "the number is palindrome" << endl;
   }
   else
   {
       cout << "the number is not palindrome" << endl;
   }	
}


