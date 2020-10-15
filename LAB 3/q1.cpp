#include<iostream>

using namespace std;

class complex
{
    float real,imag;
public:
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
    complex operator ++()
    {
        complex temp;
        temp.real=++real;
        temp.imag=++imag;
        return temp;
    }
    complex operator ++(int)
    {
        complex temp;
        temp.real=real++;
        temp.imag=imag++;
        return temp;
    }
    void showdata()
    {
        cout<<real<<"+i"<<imag<<endl;
    }
};

int main()
{
    complex c1(1.2,4.5),c2,c3(1.1,2.2);
    c2=++c1;
    c1=c3++;
    c3=++c1;
    cout<<"After Using Unary Operators:\n";
    c1.showdata();
    c2.showdata();
    c3.showdata();
    return 0;
}
