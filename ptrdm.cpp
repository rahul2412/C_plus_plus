#include<iostream>
using namespace std;
class data
{ public:
int a;
void print() {
cout<<"a is"<<a<<endl;}};
main()
{ data d,*dp;
dp=&d;
    int data::*ptr=&data::a;
d.*ptr=10;
d.print();
dp->*ptr=20;
dp->print();}
