#include<iostream>

using namespace std;

class complex
{
    float real,imag;
public:
    void getdata()
    {
        cout<<"Enter Complex Number:\n";
        cin>>real>>imag;
    }
    void showdata()
    {
        cout<<real<<"+i"<<imag<<endl;
    }
    friend complex operator +(complex &,complex &);
};

complex operator +(complex &c1,complex &c2)
{
    complex temp;
    temp.real=c1.real+c2.real;
    temp.imag=c1.imag+c2.imag;
    return temp;
}

int main()
{
    complex c1,c2,c3;
    c1.getdata();
    c2.getdata();
    c3=c1+c2;
    cout<<"The sum is:\n";
    c3.showdata();
    return 0;
}

