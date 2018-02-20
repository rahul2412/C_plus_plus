#include<iostream>
using namespace std;

class a{
int sal;
int dept;
friend void large(a&);
public:
void getdata()
{cout<<"enter dept";
cin>>dept;
cout<<"enter sal";
cin>>sal;

}
};

void large(a &c)
{ int temp;
c.sal+=1000;
cout<<"dept id is "<<c.dept<<"\n"<<"sal is "<<c.sal;

}
main()
{a c;
c.getdata();
large(c);
}
