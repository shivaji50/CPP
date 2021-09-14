#include<iostream>
#include<cstring>
using namespace std;

class Person
{
   private:
   char PersonName[20];
   char City[20];
   unsigned long Mobno;

   public:
   void Data()
   {
       cout<<"Enter The Name\n";
       cin>>PersonName;
       cout<<"Enter The City\n";
       cin>>City;
       cout<<"Enter The Mobile No\n";
       cin>>Mobno;
   }

   void Display()
   {
       cout<<"\n";
       cout<<PersonName<<"\n";
       cout<<City<<"\n";
       cout<<Mobno<<"\n";
   }

  void Search(char *Name)
   {
       if(strcmp(PersonName,Name)==0)
       {
           cout<<PersonName<<"\n";
           cout<<City<<"\n";
           cout<<Mobno<<"\n";
       }
   }

   void Search(unsigned long Mo)
   {
       if(Mobno==Mo)
       {
           cout<<PersonName<<"\n";
           cout<<City<<"\n";
           cout<<Mobno<<"\n";
       }
   }

   ~Person()
   {
       delete[] PersonName;
       delete[] City;
       
   }

};

int main()
{
    int NoRecord=0,iChoice=1;
    unsigned long Mnum;
    char Name[20];
    Person *p;
    Person *obj;


    cout<<"Enter How Many Records u want to insert\n";
    cin>>NoRecord;
    p=new Person[NoRecord];
    for(int i=0;i<NoRecord;i++)
        {
            obj=new Person;
            p[i]=*obj;
             p[i].Data();
        }

    while(iChoice!=0)
    {
        cout<<"\nMenu\n";
        cout<<"1.Display Records\n";
        cout<<"2.Search By Name\n";
        cout<<"3.Search By Mobile Number\n";
        cout<<"0.Exit\n";
        cin>>iChoice;

        switch(iChoice)
        {
            case 1:
            {
                for(int i=0;i<NoRecord;i++)
                {
                    p[i].Display();
                }
            }
            break;

            case 2:
            cout<<"Enter The Name\n";
            cin>>Name;
            for(int i=0;i<NoRecord;i++)
            {
               p[i].Search(Name);
            }
            break;
            
            case 3:
            cout<<"Enter The Mobile Number\n";
            cin>>Mnum;
            for(int i=0;i<NoRecord;i++)
            {
               p[i].Search(Mnum);
            }
            break;

            case 0:
            for(int i=0;i<NoRecord;i++)
            {
               p[i].~Person();
            }
            cout<<"Thanks For Using\n";
            break;

            default:
            cout<<"Wrong option\n";
            break;
            
        }
    }

    return 0;
}