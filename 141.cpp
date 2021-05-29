//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : FileX
// Description   : Write string at the end of file.  
// Input         : Demo.txt 
//                 Hello World
// Output        : Write Hello World at the end of Demo.txt file 
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
  	FileX(char *Name)
  	{
  		fd=open(Name,O_WRONLY|O_APPEND);
  		if(fd==-1)
  		{
  			cout<<"Unable to open file\n";
  		}
  		else
  		{
  			cout<<"File opend sucessfully....\n";
  		}
  	}
    void ReadData(char *size)
    {
      char *p=NULL;
      p=size;
      int icnt=0;
      while(*size!='\0')
        {
          icnt++;
          size++;
        }
        write(fd,p,icnt);
      }
  	~FileX()
  	{
  		close(fd);
  	}
};
int main()
{
	char str[30];
  char ptr[30];
	cout<<"Enter file name\n";
	cin>>str;
  FileX obj(str);
  cout<<"Enter String u want to add\n";
  scanf(" %[^'\n']s",ptr);
  
  obj.ReadData(ptr);
	return 0;
}