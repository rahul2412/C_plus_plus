#include<iostream>
using namespace std;
inline int sqr(int x)
{ return(x*x);
}
int main()
{
int num;
cout<<"enter number ";
cin>>num;
cout<<"\nsquare of"<<num<<"="<<sqr(num);}
