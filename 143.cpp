//////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : FileX
// Description   : Count the frequency of that character in file. 
// Input         : Demo.txt 
//                 M
// Output        : Count occurrence of M in Demo.txt 
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
   	int fd1;
   	FileX(char Name1[])
   	{
   		fd1=open(Name1,O_RDONLY);
   		if(fd1==-1)
   		{
   			cout<<"Unable to open\n";
   		}
   		else
   		{
   			cout<<"File opend sucessfully\n";
   		}
   	}
   	int Compare(char ch)
    {
       char Arr[10]={'\0'};
       char *P=NULL;
        int ret = 0,icnt=0;
        
        while((ret = read(fd1,Arr,10)) != 0)
        {
               
        }
        P=Arr;
          while(*P!='\0')
          {
            if(*P==ch)
            {
              icnt++;
            }
            P++;
          }
        return icnt;
    }
   	
       
};
int main()
{
	char str[30];
  int ret=0;
  char c='\0';
	cout<<"Enter the name of the file\n";
	cin>>str;
	cout<<"Enter the charachter\n";
	cin>>c;
	FileX obj(str);
	ret=obj.Compare(c);
  cout<<"The frequency is "<<ret<<"\n";
  return 0;
	
}










