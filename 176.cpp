////////////////////////////////////////////////////
// Function name : Dispaly()
// Description   : reverse the contents.
// Input         : 10 20 30 10 30 40 10 40 10
// Output        : 10 40 10 40 30 10 30 20 1
// Author        : Shivaji das
// Date          : 21 june 2021
///////////////////////////////////////////////////
#include<iostream>
using namespace std;

template<class T>
void Dispaly(T *arr,int iSize)
{
	for(int i=iSize-1;i>=0;i--)
	{
		cout<<arr[i]<<"\t";
	}
}

int main()
{
	int arr[]={10,20,30,40,50,60,70,80,90};
	Dispaly(arr,9);
	return 0;
}