#include<iostream>
using namespace std;
class box {
public:
static int objectcount;
box(double l=2.0,double b=2.0,double h=2.0)
{cout<<"constructor called"<<endl;
length=l;
breadth=b;
height=h;
objectcount++; }
double volume() {
return length*breadth*height; }
static int getcount() {
 return objectcount; }
private:
double height;
double length;
double breadth; };
int box::objectcount=0;
main() {

cout<<"initial stage count";
cout<<box::getcount();
box ob1(2.3,5.3,7.5);
box ob2(4.1,2.1,3.2);
cout<<"final stage count"<<box::getcount();}
