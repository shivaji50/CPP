////////////////////////////////////////////////////
// Function name : Display()
// Description   : Print that value that number of times on screen.
// Input         : M 7
// Output        : M M M M M M M
// Author        : Shiaji das
// Date          : 19 june 2021
///////////////////////////////////////////////////

#include<iostream>
using namespace std;

template<class T>
void Display(T value,int isize)
{
	for(int i=1;i<=isize;i++)
	{
		cout<<value<<"\t";
	}
	cout<<"\n";
}

int main()
{
Display('M',7);
Display(11,3);
Display(3.7,6);
return 0;
}