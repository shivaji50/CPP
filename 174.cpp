////////////////////////////////////////////////////
// Function name : Frequency()
// Description   : first occurrence of any specific value. 
// Input         : 10 20 30 10 30 40 10 40 10
//               : 40
// Output        : 6
// Author        : Shivaji das
// Date          : 21 june 2021
///////////////////////////////////////////////////
#include<iostream>
using namespace std;

template<class T>
int Frequency(T *arr,int iSize,T No)
{
   int iCnt=0;

   for(int i=0;i<iSize;i++)
   {
      iCnt++;
   	if(arr[i]==No)
   	{
   		break;
   	}
   }
   return iCnt;
}

int main()
{
int iRet=0;
int arr[]={10,20,30,10,30,40,10,40,10};
char brr[]={'A','B','C','A','B','C','A'};
iRet=Frequency(arr,9,10);
cout<<iRet<<"\n";
iRet=Frequency(brr,7,'C');
cout<<iRet<<"\n";

return 0;
}