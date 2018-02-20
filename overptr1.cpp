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
D ob;
ob.show();
}
