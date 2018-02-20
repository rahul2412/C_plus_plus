#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;
main()
{ int a[]={10,20,30,40,50,60,70};
vector<int>v(7);
copy(a,a+7,v.begin());
cout<<"vector contain";
vector<int>::iterator it;
for(it=v.begin();it!=v.end();it++)
cout<<*it<<" ";
}
