#include <iostream>
using namespace std;

void read(float *,float *);
void area(float *,float *,float *);
main() {
float a=0.0;
float b,h;

read(&b,&h);
area(&b,&h,&a);
cout<<a;}
void area(float *p,float *q,float *r)
{*r=((*(p))* (*(q)))/2;
}
void read(float *b,float *h)
{cin>>*b>>*h;}
