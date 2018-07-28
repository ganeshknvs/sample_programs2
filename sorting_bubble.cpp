#include<iostream>
using namespace std;

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void sort(int arr[], int s)
{
	int i,j;
	for(i = 0; i<s-1; i++)
	{
		for(j = 0; j<s-i-1; j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(&arr[j], &arr[j+1]);
			}
		}
	}
}
void print(int arr[], int c)
{
	for(int i = 0; i<c; i++)
	{
		cout << "array =" << arr[i] << endl;
	}
}

int main()
{
	int arr[] = {1,5,2,3};
	int size = sizeof(arr)/sizeof(arr[0]);
	cout << "size = " << size << endl;
	sort(arr, size);
	print(arr, size);
	return 0;
}
