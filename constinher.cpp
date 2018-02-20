#include<iostream>
using namespace std;

class A
{ public:
A() {cout<<"zero argument constructor of A";
cout<<endl;
}
~A()
{ cout<<"destructor in A class";
cout<<endl;}};
class B:public A
{
public:
B()
{
cout<<"zero average construction of B"<<endl;
}
~B()
{
cout<<"destruction of B"<<endl;
}
};
main()
{
B obj;
}
