#include<iostream>
using namespace std;

class Demo
{
    public:
    int num1,num2;
    Demo()
    {
      num1=0;
      num2=0;
    }

    Demo(int x,int y)
    {
      num1=x;
      num2=y;
    }
  
  friend Demo operator+(Demo,Demo);
  friend Demo operator-(Demo,Demo);
  friend bool operator==(Demo,Demo);
   
};

Demo operator+(Demo x,Demo y)
{
   return Demo(x.num1+y.num1,x.num2+y.num2);
}

Demo operator-(Demo x,Demo y)
{
   return Demo(x.num1-y.num1,x.num2-y.num2);
}

bool operator==(Demo x,Demo y)
{
  if((x.num1==y.num1)&&(x.num2==y.num2))
  {
     return true;
  }
  else
  {
     return false;
  }
}

int main()
{
  Demo obj1(10,10);
  Demo obj2(10,10);
  Demo ret1(0,0);
  Demo ret2(0,0);

  ret1=obj1+obj2;
  ret2=obj1-obj2;

  cout<<"Addition of two objects\n";
  cout<<ret1.num1<<"\t"<<ret1.num2;

  cout<<"\nSubstraction of two objects\n";
  cout<<ret2.num1<<"\t"<<ret2.num2;

  if(obj1==obj2)
  {
    cout<<"\nObjects Are equal\n";
  }
  else
  {
    cout<<"\nObjects are not equal\n";
  }

  return 0;
}
   
