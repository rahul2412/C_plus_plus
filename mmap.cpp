//multimap:hey are assosiative container that store elements formed by combination of key value and map value following a specific order and where
//multiple elements can have equivalent key
#include<iostream>
#include<map>
using namespace std;
main()
{
multimap<char,int>mp;
mp.insert(pair<char,int>('a',10));
mp.insert(pair<char,int>('b',50));
mp.insert(pair<char,int>('e',100));
while(!mp.empty())
{
cout<<mp.begin()->first<<"="<<mp.begin()->second<<endl;
mp.erase(mp.begin());
}
}
