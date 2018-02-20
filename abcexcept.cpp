#include<iostream>
using namespace std;
int main()
{ int a,b,c;
cout<<"enter no's";
cin>>a>>b>>c;
try
{if(a==0 || b==0 || c==0)
throw "invalid values entered";
else
cout<<a<<"x^x+"<<b<<"x+"<<c;}
catch(const char* mssg)
{cout<<mssg;}
}
