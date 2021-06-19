////////////////////////////////////////////////////
// Function name : Max()
// Description   : Return largest of N values
// Input         : 10 20 30 40 50
// Output        : 50
// Author        : Shiaji das
// Date          : 19 june 2021
///////////////////////////////////////////////////

#include<iostream>
using namespace std;

template<class T>
T Max(T *arr,int iSize)
{
	T Ma=arr[0];
	if(iSize<0)
	{
		return -1;
	}

	for(int i=1;i<iSize;i++)
	{
		if(arr[i]>Ma)
		{
			Ma=arr[i];
		}
	}
	return Ma;
}

int main()
{
int arr[]={10,20,30,40,50};
float brr[] = {10.0,3.7,9.8,8.7};
int iRet = Max(arr,5);
printf("%d\n",iRet); 
float fRet = Max(brr,4);
printf("%f\n",fRet); 
return 0;
}