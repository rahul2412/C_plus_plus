#include<iostream>
using namespace std;
class sample{
int *p;
public:
sample()
{ p=new int;
*p=10;
}
sample(int v)
{
p=new int;
*p=v;
}

int display() {
return (*p);}};
main()
{  sample o1,o2(9);
cout<<"value of o1 is"<<o1.display();
o1.display();
cout<<"value of o2 is"<<o2.display();
o2.display();}
