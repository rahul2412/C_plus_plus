#include<iostream>
using namespace std;
class matrix
{
    int a[20][20];
public:
    matrix()
    {

    }
    void get()
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cin>>a[i][j];
            }
        }
    }
    matrix operator+(matrix m1)
    {
        matrix c;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                c.a[i][j]=a[i][j]+m1.a[i][j];
            }
        }
        return c;
    }
    matrix operator-(matrix m2)
    {
         matrix d;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                d.a[i][j]=a[i][j]-m2.a[i][j];
            }
        }
        return d;
    }
    matrix operator*(matrix m3)
    {
        matrix e;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                e.a[i][j]=0;
                for(int k=0;k<3;k++)
                {
                    e.a[i][j]=a[k][j]*m3.a[j][k]+e.a[i][j];
                }
            }
        }
        return e
        ;
    }
    void display()
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<a[i][j]<<"\t";
            }
            cout<<endl;
        }
    }
};
int main()
{
    matrix m1,m2,m3,m4,m5;
    m1.get();
    m2.get();
    m3=m1+m2;
    cout<<"Addition of two matrix:"<<endl;
    m3.display();
    m4=m1-m2;
    cout<<"Subtraction of two matrix:"<<endl;
    m4.display();
    m5=m1*m2;
    cout<<"Multiplication of two matrix:"<<endl;
    m5.display();
}







