#include<iostream>
using namespace std;
class dist{
int m;
int k;
public:
dist();
dist(int,int);
dist operator+(dist);
void display(); };
dist::dist()
{ m=0;
k=0;}
dist::dist(int i,int j)
{ k=i;
m=j; }
dist dist::operator + (dist o)
{
    dist val;
    val.k=1000*(k+o.k);
val.m=(m+o.m)+val.k;
return val;}
void dist:: display()
{ cout<<"distance="<<m<<"mtr"; }
main()
{ dist ob1;
dist b(5,300);
dist c(3,600);
b=b+c;
b.display();
}
