#include<iostream>
#include<stdlib.h>
#include<deque>
using namespace std;
main()
{
deque<int>dq;
deque<int>::iterator itr;
int choice ,item;
while(1)
{
cout<<"1 Insert element at end"<<endl;
cout<<"2 Insert element at front"<<endl;
cout<<"3 Delete element at end"<<endl;
cout<<"4 Delete elemetn at front"<<endl;
cout<<"5 front element of deque"<<endl;
cout<<"6 last element of deque"<<endl;
cout<<"7 size of deque"<<endl;
cout<<"8 display deque"<<endl;
cout<<"Exit"<<endl;
cin>>choice;
switch(choice)
{
case 1:
cout<<"Enter element to insert at end";
cin>>item;
dq.push_back(item);
break;
case 2:
cout<<"Enter element to insert at front";
cin>>item;
dq.push_front(item);
break;
case 3:
item=dq.back();
dq.pop_back();
cout<<item<<" was deleted";
break;
case 4:
item=dq.front();
dq.pop_front();
cout<<item<< "was deleted";
break;
case 5:
cout<<"first element is "<<dq.front();
break;
case 6:
cout<<"Last element is "<<dq.back();
break;
case 7:
cout<<"Size of deque is" << dq.size();
break;
case 8:
for(itr=dq.begin();itr!=dq.end();itr++)
cout<<*itr<<" ";
break;
case 9:
exit(1);
break;
default:
cout<<"wrong choice";
}
}
}
