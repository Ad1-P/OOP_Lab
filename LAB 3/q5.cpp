#include<iostream>
 using namespace std;

 class matrices
 {
     int mat[3][3];
 public:
    void getdata()
    {
        cout<<"Enter a matrix:\n";
        for(int i=0;i<3;i++)
            for(int j=0;j<3;j++)
                cin>>mat[i][j];
    }
    matrices operator *(matrices &m)
    {
        matrices temp;
        int sum=0;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                for(int k=0;k<3;k++)
                {
                    sum += mat[i][k]*m.mat[k][j];
                }
                temp.mat[i][j]=sum;
                sum=0;
            }
        }
        return temp;
    }
    void showdata()
    {
        cout<<"The result is:\n";
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
                cout<<mat[i][j]<<"\t";
            cout<<endl;
        }
    }
 };

 int main()
 {
     matrices m1,m2,m3;
     m1.getdata();
     m2.getdata();
     m3=m1*m2;
     m3.showdata();
     return 0;
 }

