#include<iostream>

using namespace std;

class student
{
    char name[20],address[20];
    int roll,marks;
public:
    void getdata()
    {
        cout<<"Enter the Name, Address, Roll number and Marks of a student.\n";
        cin>>name>>address>>roll>>marks;
    }
    void showdata()
    {
        cout<<"The details of student are:\n";
        cout<<"Name="<<name<<"\tAddress="<<address<<"\tRoll="<<roll<<"\tMarks="<<marks<<endl;
    }
};

int main()
{
    student s;
    s.getdata();
    s.showdata();
    return 0;
}
