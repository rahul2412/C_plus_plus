#include<iostream>
using namespace std;
class complex
{ float x;
float y;
public:
complex()
{ x=0;
y=0;

}
 complex(float real,float imag)
{ x=real;
y=imag; }
friend complex operator+(complex);
void display()
{
cout<<x<<"+i"<<y<<endl;}
};
complex complex::operator+(complex c)
{

c.x=x+c.x;
c.y=y+c.y;
return c;
}
main()
{ complex c1,c2,c3;
c1=complex(1.5,3.5);
c2=complex(7.5,1.5);
c3=c1+c2;
cout<<"c1=";
c1.display();
cout<<"c2=";
c2.display();
cout<<"c3=";
c3.display();}
