
#include<iostream>
using namespace std;
class number
{
int n;
public:
number()
{
n=0;
}
number(int x)
{
n=x;
}
void operator ++()
{
++n;
}
void operator --()
{
--n;
}
void display()
{
cout<<"n="<<n<<endl;
}
};
int main()
{
number ob1(10);
++ob1;
ob1.display();
number ob2(20);
--ob2;
ob2.display();
}
