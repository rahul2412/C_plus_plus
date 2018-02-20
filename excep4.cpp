#include<iostream>
using namespace std;
main()
{ int num;
cout<<"enter num(0,-1,1)";
cin>>num;
try
{
if(num==0)
throw("zero");
else if(num==-1)
throw num;
else if(num==1)
cout<<"num is="<<num<<endl;
else
throw(float)num;
}
catch(int num) {
cout<<"num is -ve"; }
catch(const char *msg)
{cout<<"num is zero";}
catch(...)
{ cout<<"no specific code executed";
}
cout<<"exit main";
}
