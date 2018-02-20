#include<iostream>
#include<cmath>
using namespace std;
int main()
{ int a,b;
cin>>a>>b;

b=a+b;
a=abs(a-b);

b=b-a;
cout<<a<<" "<<b;}
