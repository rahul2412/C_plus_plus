//multi maps -they are associative containers that are formed by a combination a key value and map value following a specific order and where multiple elements can have equivalent keys.
#include<iostream>
#include<map>
using namespace std;
main()
{
    multimap<char,int>m;
m['a']=10;
m['b']=12;
m['b']=13;
m['c']=20;
m['d']=15;
m['d']=19;
m['e']=20;
m['f']=25;
multimap<char,int>::iterator it;
m.erase('d');
it=m.begin();
m.erase(it);
for(it=m.begin();it!=m.end();it++)
cout<<it->first<<"="<<it->second<<endl;
}
