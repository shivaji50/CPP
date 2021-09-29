#include<iostream>
#include<cstring>
using namespace std;

class Book
{
    int Bid;
    char Bname[30];
    char Bauthor[20];
    char Bpublication[20];
    public:
    static int Count;

    void Accept()
    {
        cout<<"Enter The Book name\n";
        cin>>Bname;
        cout<<"Enter The Author name\n";
        cin>>Bauthor;
        cout<<"Enter The Publication\n";
        cin>>Bpublication;
        Bid=++Count;
    }

    void DisplayAll()
    {
        cout<<"Book Id :"<<Bid<<"\n";
        cout<<"Book Name :"<<Bname<<"\n";
        cout<<"Author Name :"<<Bauthor<<"\n";
        cout<<"Publication :"<<Bpublication<<"\n";
    }

    void DisplaybyName(char *str)
    {
        if(strcmp(Bname,str)==0)
        {
            cout<<"Book Id :"<<Bid<<"\n";
            cout<<"Book Name :"<<Bname<<"\n";
            cout<<"Author Name :"<<Bauthor<<"\n";
            cout<<"Publication :"<<Bpublication<<"\n";
        }
    }

    static void Con()
    {
        cout<<"The Numbers of Books in The List is : "<<Count<<"\n"; 
    }
};

int Book::Count=0;

int main()
{
    int Records=0,iChoice=1;
    char BB[30];

    Book *P;
    cout<<"How Many Records U want to enter\n";
    cin>>Records;
    P=new Book[Records];
    for(int i=0;i<Records;i++)
    {
        Book obj;
        P[i]=obj;
        P[i].Accept();
    }

    while(iChoice!=0)
    {
        cout<<"\nMenu\n";
        cout<<"1.Display All Records\n";
        cout<<"2.Display By name\n";
        cout<<"3.Count Number of Books\n";
        cout<<"0.Exit\n";
        cin>>iChoice;

        switch(iChoice)
        {
            case 1:
            cout<<"Details of books Are\n";
            for(int i=0;i<Records;i++)
            {
                
                P[i].DisplayAll();
            }
            break;

            case 2:
            cout<<"Enter The book name to see its details\n";
            cin>>BB;
            for(int i=0;i<Records;i++)
            {
                
                P[i].DisplaybyName(BB);
            }
            break;

            case 3:
            Book::Con();
            break;

            case 0:
            cout<<"Thanks for using the application\n";
            break;

            default:
            cout<<"wrong option\n";
            break;
        }
    }

    return 0;
}