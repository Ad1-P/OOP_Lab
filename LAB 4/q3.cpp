#include <iostream>
#include <cmath>

using namespace std;

class polar
{
    float rad,ang;
public:
    polar()
    {
        rad=0;
        ang=0;
    }
    polar(float r,float theta)
    {
        rad=r;
        ang=theta;
    }
    void showdata()
    {
        cout<<"The co-ordinate in polar is:"<<endl;
        cout<<"("<<rad<<" , "<<ang<<")";
    }
};

class rectangular
{
    int x,y;
public:
    void getdata()
    {
        cout<<"Enter Cartesian co-ordinate:"<<endl;
        cin>>x>>y;
    }
    operator polar()
    {
        float rad,ang;
        rad=sqrt(pow(x,2)+pow(y,2));
        ang=atan(y/x);
        return polar(rad,ang);
    }
};

int main()
{
    polar p;
    rectangular r;
    r.getdata();
    p=r;
    p.showdata();
    return 0;
}
