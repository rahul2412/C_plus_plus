#include<iostream>
#include<map>
using namespace std;
main()
{
multimap<char,int> mp;
mp.insert(pair<char,int>('a',10));
mp.insert(pair<char,int>('b',12));
mp.insert(pair<char,int>('b',13));
mp.insert(pair<char,int>('c',20));
mp.insert(pair<char,int>('d',15));
mp.insert(pair<char,int>('d',19));
mp.insert(pair<char,int>('e',20));
mp.insert(pair<char,int>('a',10));
mp.insert(pair<char,int>('f',25));
multimap<char,int>::iterator it;
mp.erase('d');
it=mp.begin();
mp.erase(it);
for(it=mp.begin();it!=mp.end();it++)
{
cout<<it->first<<"="<<it->second<<endl;
}
}
