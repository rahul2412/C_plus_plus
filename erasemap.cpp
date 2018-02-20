//erase_event
#include<iostream>
#include<map>
using namespace std;
main()
{
map<char,int>m;
m['a']=1;
m['b']=2;
m['c']=3;
m['d']=4;
m['e']=5;
cout<<"map contains elements";
map<char,int>::iterator it;
for(it=m.begin();it!=m.end();it++)
cout<<it->first<<" "<<it->second<<endl;
it=m.begin();
++it;
m.erase(m.begin(),it);
cout<<"map now contain following elements"<<endl;
for(it=m.begin(); it!=m.end();it++)
cout<<it->first<<" "<<it->second<<endl;
}
