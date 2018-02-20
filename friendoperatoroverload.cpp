#include<iostream>
using namespace std;
class numbers
{
int n;
friend numbers & operator -(numbers&);
public:
numbers()
{
n=0;}
void display() {
cout<<n;
} };
numbers & operator -(numbers& o)
{
    o.n=-o.n;
    return o;
}
main()
{
    numbers obj,obj1;
    obj1=-obj;
    obj1.display();
}
