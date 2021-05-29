//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : FileX
// Description   : create file.
// Input         : Demo.txt 
// Output        : File created successfully.
// Author        : Shivaji das
// Date          : 29 May 2021
////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<iostream>
using namespace std;
class FileX
{
  public:
  	int fd;
  	FileX(char Name[])
  	{
  		fd=creat(Name,0777);
  		if(fd==-1)
  		{
  			cout<<"Unable to open file\n";
  		}
  		else
  		{
  			cout<<"File created sucessfully....\n";
  		}
  	}
  	~FileX()
  	{
  		close(fd);
  	}
};
int main()
{
	char str[30];
	cout<<"Enter file name\n";
	cin>>str;
	FileX obj(str);
	return 0;
}