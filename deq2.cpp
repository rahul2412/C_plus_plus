#include<iostream>
#include<deque>
using namespace std;
main()
{
int a[]={4,5,9,3};
deque<int>d(a,a+4);
d.push_back(10);
d.push_front(20);
deque<int>::iterator itr;
itr=d.begin()+2;
d.insert(itr,15);
int b[]={7,7,7};
d.insert(d.begin(),b,b+3);
for(itr=d.begin();itr!=d.end();itr++)
cout<<*itr<<" ";
}
