#include<iostream>

using namespace std;

inline int area(int length,int breadth)
{
    return length*breadth;
}

int main()
{
    int l,b;
    for(int i=0;i<5;i++)
    {
        cout<<"Enter the length and breadth of a rectangle:\n";
        cin>>l>>b;
        cout<<"The area of rectangle is: "<<area(l,b)<<endl;
    }
    return 0;
}
