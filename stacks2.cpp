#include<iostream>
#include<stack>
#include<stdlib.h>
using namespace std;

main()
{
stack<int>s;
int sum=0;
for(int i=0;i<10;i++)
s.push(i);
while(!s.empty())
{
sum+=s.top();
s.pop();}
cout<<"sum is"<<sum;}
