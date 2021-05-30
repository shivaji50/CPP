//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : FileX
// Description   : Compare the contents of that two files. If contents are same then return true otherwise return false.
// Input         : Demo.txt Hello.txt
// Output        : Compare contents of Demo.txt and Hello.txt 
// Author        : Shivaji das
// Date          : 30 May 2021
////////////////////////////////////////////////////
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<iostream>
#include<stdbool.h>
using namespace std;
class FileX
{
   public:
   	int fd1,fd2;
   	FileX(char Name1[],char Name2[])
   	{
   		fd1=open(Name1,O_RDONLY);
   		fd2=open(Name2,O_RDONLY);
   		if((fd1==-1)||(fd2==-1))
   		{
   			cout<<"Unable to open\n";
   		}
   		else
   		{
   			cout<<"File opend sucessfully\n";
   		}
   	}
   	bool Compare()
   	{
        char Arr[20]={'\0'};
        char Brr[20]={'\0'};
        char *A=Arr;
        char *B=Brr;
   		int mt=0;
   		read(fd1,Arr,20);
   		read(fd2,Brr,20);
   		while(*A!='\0')
   	{		
   		if(*A==*B)
   		{
   			
   		}
   		else
   		{
   			mt=2;*
   			break;
   		}
   		A++;
   		B++;
   	}	
   	if(mt==2)
   	{
   	   return 0;
    }
    else
    	{ return 1;}
   	}
};
int main()
{
	char str[30];
	char ptr[30];
	bool bret=false;
	cout<<"Enter the name of first file\n";
	cin>>str;
	cout<<"Enter the name of second file\n";
	cin>>ptr;
	FileX obj(str,ptr);
	bret=obj.Compare();
	if(bret==1)
	{
		cout<<"contains are same\n";
	}
	else
	{
		cout<<"Contains are not same\n";
	}
	return 0;
}










