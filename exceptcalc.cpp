#include<iostream>


using namespace std;
main()

{ int a,b;
cin>>a>>b;
int i;
cout<<"choose operation";
cin>>i;
switch(i)
{case 1:
cout<<a+b;
break;
case 2:
cout<<a-b;
break;
case 3:
cout<<a*b;
break;
case 4:
try{

if(b==0)
throw "error as b=0";
else
cout<<a/b;
}
catch(const char *msg)

{cout<<msg;}} }
