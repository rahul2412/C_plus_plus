#include<iostream>
using namespace std;
class b;
class a{
int x;
friend void large(a&,b&);
public:
void getdata()
{cout<<"enter x";
cin>>x;
}
};
class b{
int y;
friend void large(a &,b &);
public:
void getdata()
{
cout<<"enter y";
cin>>y;
}
};
void large(a &c,b &d)
{ int temp;
temp=c.x;
c.x=d.y;
d.y=temp;
cout<<c.x<<d.y;
}
main()
{a c;
b d;
c.getdata();
d.getdata();
large(c,d);
}
