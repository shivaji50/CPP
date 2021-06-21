////////////////////////////////////////////////////
// Function name : Frequency()
// Description   : count frequency of any specific value.
// Input         : 10 20 30 10 30 40 10 40 10
//               : 10
// Output        : 4
// Author        : Shivaji das
// Date          : 21 june 2021
///////////////////////////////////////////////////
#include<iostream>
using namespace std;

template<class T>
void Frequency(T *arr,int iSize,T No)
{
   int iCnt=0;

   for(int i=0;i<iSize;i++)
   {
   	if(arr[i]==No)
   	{
   		iCnt++;
   	}
   }
   cout<<iCnt<<"\n";	
}

int main()
{
int arr[]={10,20,30,10,30,40,10,40,10};
char brr[]={'A','B','C','A','B','C','A'};
Frequency(arr,9,10);
Frequency(brr,7,'A');

return 0;
}