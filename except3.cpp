#include<iostream>
using namespace std;
main()
{ int num;
cin>>num;
try
{
if(num==0)
throw("zero");
else if(num<0)
throw num;
else
cout<<"number="<<num; }
catch(int num) {
cout<<"no, is -ve"<<endl;}
catch(const char *msg)
{cout<<"no. is zero"<<endl; }
cout<<"after catch blocks";}
