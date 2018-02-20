#include<iostream>
using namespace std;
class shape {
protected:
float h;
int r;
float R;
int a;
float v;
public:
void get()
{ cin>>r;}
void put()
{a=3.14*r*r;
cout<<a<<endl; }
void get1()
{ cin>>R;
}
void put1()
{v=(float)0.33*3.14*R*R*h;
cout<<v<<endl; } };

class circle:public shape {
public:
  void p()
{ get();
 put();}

 };
class cone:public shape{

  public:
void q() { get1();
 put1();
} };
main()
{ circle m;
cone n;
m.p();
n.q(); }
