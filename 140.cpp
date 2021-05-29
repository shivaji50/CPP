//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : FileX
// Description   : display size of file. 
// Input         : Demo.txt 
// Output        : File size is 56 bytes
// Author        : Shivaji das
// Date          : 29 May 2021
////////////////////////////////////////////////////
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
        int ret = 0,sum=0;
        
        while((ret = read(fd,Arr,10)) != 0)
        {
           sum=sum+ret;
        }
        cout<<"File size is "<<sum<<" byte\n";

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