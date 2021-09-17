#include<iostream>
using namespace std;

class Worker
{
    char WoName[20];
    int NoHr;
    int ParRa;

    public:
    void getdata()
    {
        cout<<"Enter The Worker Name\n";
        cin>>WoName;
        cout<<"Enter No of Hours Worked\n";
        cin>>NoHr;
    }

    int Calculate(int Pa=100)
    {
        return NoHr*Pa;
    }

    ~Worker()
    {
        delete[] WoName;
        
    }
};

int main()
{
    int iRet=0;
    Worker *obj=new Worker;
    obj->getdata();
    iRet=obj->Calculate();
    cout<<"The Salary is "<<iRet;
    obj->~Worker();
    delete[] obj;
    return 0;

}