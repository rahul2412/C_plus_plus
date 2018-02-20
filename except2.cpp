#include<iostream>
using namespace std;
main()
{ int num1,num2,x;
cin>>num1>>num2;
x=num2;
try
{if(num2==0)
throw x;
else
cout<<num1/num2;
 }
 catch(int k)
{

 cout<<"exception num2="<<x<<endl;}
}
