#include<iostream>
using namespace std;

class Number1
{
   private:
   int a;
   public:
   Number1(int x)
   {
       a=x;
   }

   friend int Max();
};

class Number2
{
   private:
   int b;
   public:
   Number2(int y)
   {
       b=y;
   }

   friend int Max();
};

int Max()
{
    int no1=0,no2=0;
    cout<<"Enter The Number for class 1\n";
    cin>>no1;
    cout<<"Enter The Number for class 2\n";
    cin>>no2;

    Number1 obj1(no1);
    Number2 obj2(no2);
    if(obj1.a>obj2.b)
    {
        return obj1.a;
    }
    else
    {
        return obj2.b;
    }
}

int main()
{
    int iRet=0;
    iRet=Max();
    cout<<"The Maximum of two Number is : "<<iRet;

    return 0;
}

