#include<iostream>
using namespace std;
class A {
int l;
int *a;
public:
friend class B;
A(int b)
{ l=b;
a=new int[b];
for(int i=0;i<b;i++)
cin>>a[i];}};
class B {
int l;
int *a;
public:

 B(int b)
{  l=b;
a=new int[b];
for(int i=0;i<b;i++)
cin>>a[i];}
void add(A ob)

{for(int i=0;i<l;i++)
 a[i]=ob.a[i]+a[i]; }

void display()

{  for(int i=0;i<l;i++)
cout<<a[i]; }};

main()
  { int a;
cin>>a;
A x(a);

B y(a);
y.add(x);
y.display();


}
