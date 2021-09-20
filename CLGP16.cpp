#include<iostream>
using namespace std;

class Swap
{
   int x,y;
   public:
   void GetData()
   {
       cout<<"Enter The First Number\n";
       cin>>x;
       cout<<"Enter The second Number\n";
       cin>>y;
   }

   void Display()
   {
       cout<<"After Swaping\n";
       cout<<"Number 1 : "<<x<<"\n";
       cout<<"Number 2  :"<<y;
   }

   friend void Sw(Swap *(&));
};

void Sw(Swap *(&obj))
{
   int temp=0;
   temp=obj->x;
   obj->x=obj->y;
   obj->y=temp;
}


int main()
{
    Swap *obj=new Swap();
    obj->GetData();
    Sw(obj);
    obj->Display();

    return 0;
}