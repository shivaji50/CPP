# include <iostream>
using namespace std;

class Arithmetic
{
   private:
   int x,y;
   public:
   Arithmetic(int a,int b)
   {
       x=a;
       y=b;
   }

   inline int Addition()
   {
       return(x+y);
   }

   inline int Substraction()
   {
       return(x-y);
   }

   inline int Mult()
   {
       return(x*y);
   }

   inline int Div()
   {
       return(x/y);
   }
};

int main()
{
    int no1=0,no2=0,iRet=0;
    int iChoice=1;

    cout<<"Enter two Numbers\n";
    cout<<"Enter number 1\n";
    cin>>no1;
    cout<<"Enter number 2\n";
    cin>>no2;

    Arithmetic *obj=new Arithmetic(no1,no2);
    while(iChoice!=0)
    {
        cout<<"\nMenu\n";
        cout<<"1.Addition\n";
        cout<<"2.Substraction\n";
        cout<<"3.Multiplication\n";
        cout<<"4.Division\n";
        cout<<"0.Exit\n";
        cin>>iChoice;

        switch(iChoice)
        {
            case 1:
            iRet=obj->Addition();
            cout<<"The Addition is :"<<iRet;
            break;

            case 2:
            iRet=obj->Substraction();
            cout<<"The Substraction is :"<<iRet;
            break;

            case 3:
            iRet=obj->Mult();
            cout<<"The Multiplication is :"<<iRet;
            break;

            case 4:
            iRet=obj->Div();
            cout<<"The Division is :"<<iRet;
            break;

            case 0:
            cout<<"Thanks for using the application\n";
            break;

            default:
            cout<<"Wrong Choice\n";
            break;
        }
    }
    
    return 0;
}