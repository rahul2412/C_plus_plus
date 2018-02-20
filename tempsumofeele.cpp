#include<iostream>
using namespace std;
template<class type>
type sum(type a[],type n)
{
type s=0;
for(int i=0;i<n;i++)
s+=a[i];
return s; }
main()
{
int a[10],n;
cin>>n;
cout<<"sum of array="<<sum(a,n);
float b[10],n1;
cin>>n;
cout<<sum(b,n1);}
