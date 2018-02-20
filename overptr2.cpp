#include<iostream>
using namespace std;
class B
{
public:
void show()
{
cout<<"base class";
}
};
class D:public B
{
public:
void show()
{
cout<<"derived class";
}};
main()
{
B *b;
D d;
b=&d;
b->show();
//at this pt early bindings occur,binding means assigning object to a variable during compilation,also known as static binding.}
