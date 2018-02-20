#include<iostream>
#include<map>
using namespace std;
main()
{
map<char,int> m;
m['a']=10;
m['b']=20;
m['c']=30;
m.insert(pair<char,int>('d',4));
m.insert(pair<char,int>('e',5));
cout<<"map contain following elements"<<endl;
map<char,int>::iterator it;
for(it=m.begin();it!=m.end();it++)
{
cout<<it->first<<"="<<it->second<<endl;
}
}
