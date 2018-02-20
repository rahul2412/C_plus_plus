#include <iostream>
#include<vector>
using namespace std;

int main()
{
int n;
vector<int> v(10);
for(int i=0;i<v.size();i++)
{ cin>>n;
v.at(i)=n;
}
cout<<"elements are ";
for(int i=0;i<v.size();i++)
cout<<v[i]<<" ";
}
