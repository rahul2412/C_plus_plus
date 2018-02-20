#include<iostream>
using namespace std;
class B;
class A
{
    int c;
   public:
       void get(int a,int b)
       {
          c=a;
          a=b;
          b=c;
          cout<<"By value this is:"<<endl;
          cout<<a<<b;
       }
};
class B
{
    int c;
public:
    void set(int *p,int *q)
    {
        c=*p;
        *p=*q;
        *q=c;
    }
};
int main()
{
    int x,y;
    A a1;
    cin>>x>>y;
    a1.get(x,y);
    B b1;
    b1.set(&x,&y);
    cout<<endl<<"By reference this is:"<<endl;
    cout<<x<<y;
}

