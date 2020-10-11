#include<iostream>

using namespace std;

class complex
{
    float real,imag;
public:
    ~complex()
    {
        cout<<"Destroying Object"<<endl;
    }
    complex()
    {
        real=0;
        imag=0;
    }
    complex(float r, float i)
    {
        real=r;
        imag=i;
    }
    complex(complex &c)
    {
        real=c.real;
        imag=c.imag;
    }
    void showdata()
    {
        cout<<real<<"+i"<<imag<<endl;
    }
};

int main()
{
    complex c1,c2(2.3,3.2),c3(c2);
    cout<<"Use of Default constructor.\n";
    c1.showdata();
    cout<<"Use of Parameterized constructor.\n";
    c2.showdata();
    cout<<"Use of Copy constructor.\n";
    c3.showdata();
    return 0;
}

