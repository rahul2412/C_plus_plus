//count
#include<iostream>
#include<map>
using namespace std;
main()
{
map<char,int> m;
char c;
m['a']=10;
m['c']=20;
m['e']=30;
for(c='a';c<'h';c++)
{
if(m.count(c)>0)
cout<<c<<" is element of map"<<endl;
else
cout<<c<<" is not element of map"<<endl;
}
}
