#include <iostream>

using namespace std;

class Dis
{
    float feet;
    float inch;
    float meter;
public:
    void getdata()
    {
        cout<<"Enter the distance in inch and feet:"<<endl;
        cin>>feet>>inch;
    }
    operator float()
    {
        feet=feet+inch/12;
        return(feet/3.2808);
    }
};

int main()
{
    Dis d;
    d.getdata();
    float meter;
    meter=d;
    cout<<"The distance in meter is: "<<meter;
    return 0;
}
