#include<iostream>
using namespace std;
void fact(int n);
int main()
{ int m;
cout<<"enter m";
cin>>m;
fact(m);
return 0;
}
void fact(int n)
{ int fact=1;
try
{
    if(n<=0)
        throw "invalid value";
        else
            for(int i=2;i<=n;i++)
{fact=fact*i;}
cout<<fact;
}
catch(const char* p)
{
    cout<<p;
}
}
