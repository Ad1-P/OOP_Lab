#include<iostream>

using namespace std;

class complex
{
    float real,imag;
public:
    void getdata()
    {
        cout<<"Enter a complex number:\n";
        cin>>real>>imag;
    }
    void showdata()
    {
        cout<<"The sum is: "<<real<<"+i"<<imag;
    }
    void sum(complex &c1, complex &c2)
    {
        real=c1.real+c2.real;
        imag=c1.imag+c2.imag;
    }
};

int main()
{
    complex c1,c2,c3;
    c1.getdata();
    c2.getdata();
    c3.sum(c1,c2);
    c3.showdata();
    return 0;
}
