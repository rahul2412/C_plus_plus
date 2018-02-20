#include<iostream>
using namespace std;
class number{
static int c;
int k;
public:
void func()
{k=0;}
void count() {
++c;
++k;
cout<<"value of c= "<<c<<"and address of c="<<&c;
cout<<"value of k= "<<k<<"and address of k="<<&k; }};
int number::c=0;
main()
{
number a,b,c;
a.func();
b.func();
c.func();
a.count();
b.count();
c.count();}
