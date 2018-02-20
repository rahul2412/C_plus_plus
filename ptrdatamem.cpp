#include<iostream>
using namespace std;
class box
{
double height;
double length;
double breadth;
public:
box(double h=2.0,double l=3.0,double b=4.0)
{ height=h;
length=l;
breadth=b;}
double volume() {
return length*breadth*height;
}};
main()
{
box obj1(1.2,2.3,3.40);
box obj2(4.1,3.6,7.8);
box *ptr;
ptr=&obj1;
cout<<"volume of obj1 is"<<ptr->volume()<<endl;
ptr=&obj2;
cout<<"volume of obj2 is"<<ptr->volume()<<endl;}
