#include<iostream>
using namespace std;
class base{
public:
void show()
{
cout<<"show base class";
}
virtual void print()=0;

};
class derived:public base{
public:
void show(){
cout<<"show child class";
}
void print()
{
cout<<"print child class";
}};
main(){
base *bptr;
derived d;
bptr=&d;
bptr->show();
bptr->print();}
