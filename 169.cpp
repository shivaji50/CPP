////////////////////////////////////////////////////
// Function name : Add()
// Description   : Addition of N values
// Input         : 10 20 30 40 50
// Output        : 150
// Author        : Shiaji das
// Date          : 19 june 2021
///////////////////////////////////////////////////


#include<iostream>
using namespace std;

template<class T>
T Add(T *arr,int iSize)
{
	T Sum=0;
	if(iSize<0)
	{
		return 0;
	}

	for(int i=0;i<iSize;i++)
	{
		Sum=Sum+arr[i];
	}
	return Sum;
} 

int main()
{
int arr[]={10,20,30,40,50};
float brr[] = {10.0,3.7,9.8,8.7};
int iSum = Add(arr,5);
printf("%d\n",iSum);
float fSum = Add(brr,4);
printf("%f\n",fSum);
return 0;
}