#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;
bool Greater(int val)
{
if(val>8)
return 1;
else
return 0;
}
int main()
{
vector<int> v;
vector<int>::iterator it;
int result;
v.push_back(13);
v.push_back(21);
v.push_back(8);
v.push_back(5);
v.push_back(10);
cout<<"vector is"<<endl;
for(it=v.begin();it!=v.end();it++)
cout<<*it<<" ";
result=count_if(v.begin(),v.end(),Greater);
cout<<"no. of elements greater than 8 is"<<result;
}
