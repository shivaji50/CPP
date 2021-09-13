#include<iostream>
using namespace std;

class Arithmetic
{
    public:
     
    int sum(int no1,int no2)
    {
        return no1+no2;
    }

    float sum(float no1,float no2,float no3)
    {
        return no1+no2+no3;
    }

    int sum(int arr[],int no)
    {
        int sum=0;

        for(int i=0;i<no;i++)
        {
            sum=sum+arr[i];
        }

        return sum;
    }

};

int main()
{
    int num1=0,num2=0,iRet=0,iChoice=1,iSize=0;
    float fnum1=0.0,fnum2=0.0,fnum3=0.0,fRet=0.0;
    int Aelements=0;

    Arithmetic *obj=new Arithmetic;

    int *arr=NULL;

    while(iChoice!=0)
    {
        cout<<"\nMenu\n";
        cout<<"1.Addition of two Integer Number\n";
        cout<<"2.Addition of three Float Number\n";
        cout<<"3.Addition of all Array elements\n";
        cout<<"0.Exit\n";
        cin>>iChoice;

        switch(iChoice)
        {
            case 1:
            cout<<"Enter The First Number\n";
            cin>>num1;
            cout<<"Enter The Second Number\n";
            cin>>num2;
            iRet=obj->sum(num1,num2);
            cout<<"The Addition of two number is : "<<iRet;
            break;

            case 2:
            cout<<"Enter the First Float Number\n";
            cin>>fnum1;
            cout<<"Enter the Second Float Number\n";
            cin>>fnum2;
            cout<<"Enter the Third Float Number\n";
            cin>>fnum3;
            fRet=obj->sum(fnum1,fnum2,fnum3);
            cout<<"The Addition of Three Float Number is : "<<fRet;
            break;

            case 3:
            cout<<"Enter the Size of the Array\n";
            cin>>iSize;
            arr=new int[iSize];
            cout<<"Enter the Array Elements one by one\n";
            for(int i=0;i<iSize;i++)
            {
               cout<<"Enter The Element "<<i+1<<"\n"; 
               cin>>Aelements;
               arr[i]=Aelements;
            }
            iRet=obj->sum(arr,iSize);
            cout<<"The Sum of the Array is : "<<iRet;
            break;

            case 0:
            cout<<"Thanks For Using The Application\n";
            break;

            default:
            cout<<"Wrong Option\n";
            break;

        }
    }

    return 0;
}