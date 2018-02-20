#include<iostream>
using namespace std;
class test
{ public:
    int x;
void show()
{ cout<<"x is"<<x ;}};
main()
{ test t;
int test::*ptr=&test::x;
t.*ptr=20;
t.show();
test *tp=new test;
tp->*ptr=80;
tp->show();}
