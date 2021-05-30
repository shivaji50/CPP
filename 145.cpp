//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : FileX
// Description   : Write name and Data of that three files in Demo.txt file one after another.
// Input         : abc.txt 
//                 pqr.txt 
//                 xyz.txt                  
// Output        : Write file name and data of each file in Demo.txt file. 
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
   	int fd1,fd2,fd3,fd4;
   	FileX(char Name1[],char Name2[],char Name3[],char Name4[])
   	{
   		fd1=open(Name1,O_RDONLY|O_APPEND);
   		fd2=open(Name2,O_RDONLY|O_APPEND);
        fd3=open(Name3,O_RDONLY|O_APPEND);
        fd4=creat(Name4,O_WRONLY|O_APPEND);
   		if((fd1==-1)||(fd2==-1)||(fd3==-1)||(fd4==-1))
   		{
   			cout<<"Unable to open\n";
   		}
   		else
   		{
   			cout<<"File opend sucessfully\n";
   		}
   	}
    void Write(char N1[],char N2[],char N3[])
    {
      char Arr1[50]={'\0'};
      char Arr2[50]={'\0'};
      char Arr3[50]={'\0'};
      int sum1=0,sum2=0,sum3=0,ret=0;
      while((ret = read(fd1,Arr1,50))!= 0)
        {
            
            sum1=sum1+ret;
            
        }
       write(fd4,N1,10);
        write(fd4,Arr1,sum1);
      ret=0;
      while((ret = read(fd2,Arr2,50))!= 0)
        {
            
            sum2=sum2+ret;
            
        }
         write(fd4,N2,10);
      write(fd4,Arr2,sum2);
      ret=0;
      while((ret = read(fd3,Arr3,50))!= 0)
        {
            
            sum3=sum3+ret;
            
        }
        write(fd4,N3,10);
      write(fd4,Arr3,sum3);
    
    }
   	
};
int main()
{
	char str[30];
	char ptr[30];
    char mtr[30];
    char htr[30];
	cout<<"Enter the name of first file\n";
	cin>>str;
	cout<<"Enter the name of second file\n";
	cin>>ptr;
    cout<<"Enter the name of third file\n";
    cin>>mtr;
    cout<<"Enter the name of fourth file\n";
    cin>>htr;
    FileX obj(str,ptr,mtr,htr);
    obj.Write(str,ptr,mtr);
  
	
	return 0;
}
