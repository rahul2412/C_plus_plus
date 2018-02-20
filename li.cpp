#include<iostream>
#include<list>
using namespace std;
main()
{
int num;
list<int> l2,l1;
list<int>::iterator itr;
cout<<"Enter element in 1st list";
for(int i=0;i<5;i++)
{
cin>>num;
l1.push_back(num);
}
cout<<"Enter elements in 2nd list";
for(int i=0;i<5;i++)
{
cin>>num;
l2.push_back(num);
}
cout<<"list 1 is";
for(itr=l1.begin();itr!=l1.end();itr++)
cout<<*itr<<" ";
cout<<"list 2 is";
for(itr=l2.begin();itr!=l2.end();itr++)
cout<<*itr<<" ";
l1.reverse();
cout<<"After reverse is"<<endl;
for(itr=l1.begin();itr!=l1.end();itr++)
cout<<*itr<<" ";
l2.sort();
cout<<"After sorting is "<<endl;
for(itr=l2.begin();itr!=l2.end();itr++)
cout<<*itr<<" ";
l1.merge(l2);
cout<<"merged list is ";
for(itr=l1.begin();itr!=l1.end();itr++)
cout<<*itr<<" ";
 }

