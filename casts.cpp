#include<iostream>
using namespace std;
class base
{
public:
int b;
public:
void show()
{
cout<<"b="<<b<<"\n";
}};
class derived:public base
{
public:
int d;
public:
void show()
{
cout<<"b="<<b<<"\n";
cout<<"d="<<d<<"\n";
}};
main()
{
base *bptr;
base ob;
bptr=&ob;
bptr->b=200;
bptr->show();
derived ob2;
bptr=&ob2;
bptr->b=300;
//bptr->d=400;
cout<<"now bptr points to derived class";
bptr->show();
derived *dptr;
dptr=&ob2;
dptr->d=100;
dptr->show();
((derived *)bptr)->d=150;
((derived *)bptr)->show();
}




