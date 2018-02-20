#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;

bool example(int n)
{ return(n%2==0);}
main()
{
vector<int>v1={1,2,3,4,5};
vector<int>v2=(3);
copy_if(v1.begin(),v1.end(),v2.begin(),example);
cout<<"vector 2 contains";
for(vector<int>::iterator it=v2.begin();it!=v2.end();it++)
cout<<*it<<" "; }
