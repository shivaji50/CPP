//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : FileX
// Description   : read all data from the file and display contents on screen. 
// Input         : Demo.txt 
// Output        : Display all data of file.
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
  		fd=open(Name,O_RDONLY);
  		if(fd==-1)
  		{
  			cout<<"Unable to open file\n";
  		}
  		else
  		{
  			cout<<"File opend sucessfully....\n";
  		}
  	}
    void ReadData()
    {
        char Arr[20]={'\0'};
        int ret = 0;
        
        while((ret = read(fd,Arr,10)) != 0)
        {
           
            write(1,Arr,ret);
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
  obj.ReadData();
	return 0;
}