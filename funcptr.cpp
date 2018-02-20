#include <iostream>
using namespace std;

void sum(int *,int *,int *);
main() {
int a,b,s,d;
s=0;
cin>>a>>b;
sum(&a,&b,&s);
cout<<s;}
void sum(int *p,int *q,int *r)
{ *r=*p+*q;
}
