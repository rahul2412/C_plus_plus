#include<iostream>


using namespace std;
main()
{
int p,q;
cin>>p>>q;
try
{ divide(p,q);}
catch(const char*msg)
{cout<<msg;}}
