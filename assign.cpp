#include<iostream>
#include<deque>
using namespace std;
main()
{
deque<int>d1;
deque<int>d2;
deque<int>d3;
d1.assign(7,10);
deque<int>::iterator itr;
itr=d1.begin()+1;
d2.assign(itr,d1.end()-1);
int a[]={2,3,4};
d3.assign(a,a+3);
cout<<"size of d1 is "<<d1.size()<<endl;
cout<<"size of d2 is "<<d2.size()<<endl;
cout<<"size of d3 is "<<d3.size()<<endl;
}
