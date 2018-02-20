#include<iostream>
using namespace std;
class number{
static int c;
public:
void count()
{++c;
cout<<"c="<<c<<endl;
}};
int number::c=1;
main()
{ number o1,o2;
o1.count();
o2.count();}
