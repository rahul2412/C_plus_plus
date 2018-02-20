#include<iostream>
using namespace std;
class test {
    int a;
    int b;
 public:
 void set()
{ cin>>a>>b; }
friend int add(test &);
};
int add(test &t)
{int test::*ptr1=&test::a;
int test::*ptr2=&test::b;
return t.*ptr1+t.*ptr2;
}
main()
{
test ob;
void(test::*ptr)(void)=&test::set;
(ob.*ptr)();
cout<<"sum is"<<add(ob) ;}
