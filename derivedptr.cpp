#include<iostream>
using namespace std;
class base {
public:
void print() {
cout<<"PRINT-BASE CLASS"<<"\n"; }};
class derived:public base {
public:
void print() {
cout<<"PRINT-DERIVED CLASS"<<"\n"; }};
main()
{
base *bptr;
base b;
derived d,*dptr;
bptr=&b;
bptr->print() ;
bptr=&d;
bptr->print();
dptr=&d;
dptr->print(); }
