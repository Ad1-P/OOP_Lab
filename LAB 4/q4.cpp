#include <iostream>
#include <cmath>

using namespace std;

class rectangular
{
    int x,y;
public:
    void getdata()
    {
        cout<<"Enter Cartesian co-ordinate:"<<endl;
        cin>>x>>y;
    }
    int returnx()
    {
        return x;
    }
    int returny()
    {
        return y;
    }
};

class polar
{
    float rad,ang;
public:
    polar()
    {
        rad=0;
        ang=0;
    }
    polar(rectangular rect)
    {
        rad=sqrt(pow(rect.returnx(),2)+pow(rect.returny(),2));
        ang=atan(rect.returny()/rect.returnx());
    }
    void showdata()
    {
        cout<<"The co-ordinate in polar is:"<<endl;
        cout<<"("<<rad<<" , "<<ang<<")";
    }
};

int main()
{
    polar pol;
    rectangular rect;
    rect.getdata();
    pol = rect;
    pol.showdata();
    return 0;
}

