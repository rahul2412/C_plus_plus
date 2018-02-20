#include<iostream>
using namespace std;
template<class T>
T square(T num)
{
return (num*num);
}
main() {
int a;
cin>>a;
cout<<"square of a"<<square(a);
double d;
cin>>d;
cout<<"square of d="<<square(d);
}
