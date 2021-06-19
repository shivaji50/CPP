////////////////////////////////////////////////////
// Function name : Max()
// Description   : find largest number from three numbers. 
// Input         : 10 20 30
// Output        : 30
// Author        : Shiaji das
// Date          : 19 june 2021
///////////////////////////////////////////////////

#include<iostream>
using namespace std;

template<class T>
T Max(T no1,T no2,T no3)
{
	if((no1>no2)&&(no1>no3))
	{
		return no1;
	}
	else if((no2>no1)&&(no2>no3))
	{
		return no2;
	}
	else
	{
		return no3;
	}
}

int main()
{
	int iRet=0;
	float fRet=0;
	iRet=Max(10,20,30);
	printf("The Maximum number is %d \n",iRet);
	fRet=Max(5.0,10.0,20.0);
	printf("The Maximum number is %f \n",fRet);
	return 0;
}