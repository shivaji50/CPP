#include<iostream>
using namespace std;

class Arr
{
   int **arr;
   int row,col,num;
   public:
   Arr(int M,int N)
   {
       row=M;
       col=N;
       arr=new int*[M];
       for(int i=0;i<M;i++)
       {
           arr[i]=new int[N];
       }
   }

   void GetElement()
   {
       cout<<"Enter The Elements one by one \n";
       for(int i=0;i<row;i++)
       {
          for(int j=0;j<col;j++)
          {
             cin>>num;
             arr[i][j]=num;    
          }
          cout<<"\n";
       }
   }

   void Display()
   {
       cout<<"The Elements in the Matrix are \n";
       for(int i=0;i<row;i++)
       {
          for(int j=0;j<col;j++)
          {
             cout<<arr[i][j]<<"\t";  
          }
          cout<<"\n";
       }
   }

   void Sum()
   {
       int sum=0;
       for(int i=0;i<row;i++)
       {
          for(int j=0;j<col;j++)
          {
             sum=sum+arr[i][j];  
          }
       }

       cout<<"The Addition of all elements is : "<<sum;
   }

   ~Arr()
   {
       for(int i=0;i<row;i++)
       {
           delete[] arr[i];
       }
       delete[] arr;
   }
};

int main()
{
    int row=0,col=0;

    cout<<"Enter The Row \n";
    cin>>row;
    cout<<"Enter The col \n";
    cin>>col;
    
    Arr *obj=new Arr(row,col);
    obj->GetElement();
    obj->Display();
    obj->Sum();
    delete obj;

    return 0;

}