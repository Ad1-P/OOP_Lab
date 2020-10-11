#include<iostream>

using namespace std;

void area(int r)
{
    cout<<"The area of circle is: "<<3.14*r*r<<endl;
}
void area(int l,int b)
{
    cout<<"The area of rectangle is: "<<l*b<<endl;
}

int main()
{
    area(22);
    area(12,21);
    return 0;
}
