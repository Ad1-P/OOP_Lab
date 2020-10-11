#include<iostream>

using namespace std;

float interest(int p=100, int t=2, int r=10)
{
    return p*t*r*0.01;
}

int main()
{
    cout<<"Simple interest having P=200 T=2 and R=10 is: "<<interest(200)<<endl;
    cout<<"Simple interest having P=100 T=10 and R=11 is: "<<interest(100,10,11)<<endl;
    cout<<"Simple interest having P=100 T=3 and R=10 is: "<<interest(100,3)<<endl;
    return 0;
}
