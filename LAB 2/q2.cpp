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
        cout<<"Name="<<name<<"\tAddress="<<address<<"\tRoll="<<roll<<"\tMarks="<<marks<<endl;
    }
};

int main()
{
    int n=0;
    cout<<"Input the number of students: ";
    cin>>n;
    student s[n];
    for(int i=0;i<n;i++)
        s[i].getdata();
    cout<<"The details of student are:\n";
    for(int i=0;i<n;i++)
        s[i].showdata();
    return 0;
}
