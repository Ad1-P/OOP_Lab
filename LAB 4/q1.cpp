#include <iostream>

using namespace std;

class Dis
{
    int feet;
    float inch;
public:
    Dis()
    {
        feet=0;
        inch=0;
    }
    Dis(float m)
    {
        float feetf= 3.2808*m;
        feet=int(feetf);
        inch=12*(feetf/feet);
    }
    void showdata()
    {
        cout<<"The distance is "<<feet<<" feet "<<inch<<" inch."<<endl;
    }
};

int main()
{
    Dis d;
    float meter;
    cout<<"Enter the distance in meter: ";
    cin>>meter;
    d=meter;
    d.showdata();
    return 0;
}
