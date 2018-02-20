#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;
main()
{
int a[10]={10,20,30,30,20,10,10,20};
int c=count(a,a+8,10);
;
vector<int>v(a,a+8);
c=count(v.begin(),v.end(),20);
cout<<"20 has appeared"<<c<<"times";
}
