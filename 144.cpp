//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : FileX
// Description   : Append the contents of first file at the end of second file. 
// Input         : Demo.txt Hello.txt
// Output        : Concat contents of Demo.txt at the end of Hello.txt 
// Author        : Shivaji das
// Date          : 30 May 2021
////////////////////////////////////////////////////
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<iostream>
using namespace std;
class FileX
{
   public:
   	int fd1,fd2;
   	FileX(char Name1[],char Name2[])
   	{
   		fd1=open(Name1,O_RDONLY|O_APPEND);
      fd2=open(Name2,O_WRONLY|O_APPEND);
   		if((fd1==-1)||(fd2==-1))
   		{
   			cout<<"Unable to open\n";
   		}
   		else
   		{
   			cout<<"File opend sucessfully\n";
   		}
   	}
   	void Compare()
    {
      int ret=0,sum=0;
      char Arr[100]={'\0'};
      while((ret = read(fd1,Arr,100))!= 0)
        {
            
            sum=sum+ret;
            
        }
        
      write(fd2,Arr,sum);
       
    }
    ~FileX()
    {
      close(fd1);
      close(fd2);
    }
  
   	
       
};
int main()
{
	char str[30];
  char ptr[30];
  int ret=0;
	cout<<"Enter the name of the first file\n";
	cin>>str;
	cout<<"Enter the name of the second file\n";
	cin>>ptr;
	FileX obj(str,ptr);
	obj.Compare();

  return 0;
	
}
