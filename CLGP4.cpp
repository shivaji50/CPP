#include<iostream>
using namespace std;

class Calculate
{
    private:
    float pi=3.14;
    public:
    
    int Area(int len,int radius)
    {
        return pi*radius*(radius+len);
    }

    int Area(int radius)
    {
        return 4*pi*radius*radius;
    }

};

int main()
{
    int radius,length,iRet;
    int iChoice=1;

    Calculate obj;

    while(iChoice!=0)
    {
        cout<<"\nMenu\n";
        cout<<"1.Area of cone\n";
        cout<<"2.Area of Sphere\n";
        cout<<"0.Exit\n";
        cin>>iChoice;

        switch(iChoice)
        {
            case 1:
            cout<<"Enter The Length\n";
            cin>>length;
            cout<<"Enter The Radius\n";
            cin>>radius;
            iRet=obj.Area(length,radius);
            cout<<"The Area of the Cone is : "<<iRet;
            break;

            case 2:
            cout<<"Enter The Radius\n";
            cin>>radius;
            iRet=obj.Area(radius);
            cout<<"The Area of the Sphere is : "<<iRet;
            break;

            case 0:
            cout<<"Thanks For Using The Application\n";
            break;

            default:
            cout<<"Wrong Input\n";
            break;
        }
    }

    return 0;
}