#include<iostream>
using namespace std;
class shape{
protected:
int width,height;
public:
shape(int a=0,int b=0)
{
width=a;
height=b;
}
int area(){
cout<<"parent class area";
return 0;
}
};
class rectangle:public shape{
public:
rectangle(int a=0,int b=0):shape(a,b)
{}
int area()
{
cout<<"rectangle class area";
}};
class triangle:public shape{
public:
triangle(int a=0,int b=0):shape(a,b)
{
}
int area()
{
cout<<"triangle class area";
return (height*width/2);
}};
main()
{
shape *s;
rectangle r(10,5);
triangle t(10,7);
s=&r;
s->area();
s=&t;
s->area();
}
