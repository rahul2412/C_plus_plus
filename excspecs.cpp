#include<iostream>


using namespace std;
void check(int i) throw(int,double)

{ if(i==1)
throw i;
else if(i==2)
throw i;
else if(i==-2)
throw(float)i;
cout<<"end of function\n";}
main()
{
try{
cout<<"i=1"<<endl;

check(2);
cout<<"i=2"<<endl;
check(3);}
catch(char) {
cout<<"caught character exception";}
catch(int)
{cout<<"caught integer exception";}
catch(double)
{cout<<"caught double exception";}}
