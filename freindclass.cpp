#include<iostream>
using namespace std;
class B;
class A{
int x;
friend class B;
public:
void getdata()
{cout<<"enter x";
cin>>x;

}

void showdata()
{ cout<<"A's x= "<<x;
}};
class B{
int y;

public:
void getdata()
{
cout<<"enter y";
cin>>y;
void showdata()
{ cout<<"B's y= "<<y;
}
void swap(A &a)
{int temp;
temp=a.x;
a.x=y;
y=temp;}
};
void main()
{A a;
B b;
a.getdata();
b.getdata();
a.showdata();
b.showdata();
b.swap(a);
cout<<"after swapping ";
a.showdata();
b.showdata();
}
