#include<iostream>
using namespace std;
float add(float,float);
float sub(float,float);
float (*fp)(float,float);
main()
{ float a,b;
cin>>a>>b;
fp=add;
(*fp)(a,b);
fp=sub;
(*fp)(a,b);}
float add(float a,float b)
{ cout<<a+b<<endl;}
float sub(float a,float b)
{ cout<<a-b;}
