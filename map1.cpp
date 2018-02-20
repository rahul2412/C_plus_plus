//derived containers are derived from sequence containers,they do not support iterators so they cant be used for data manipulation
//associative containers-they support direct access to elements using keys no sequential holding of elements,slow for random access but facilltates fast searching insertion and deletion
//map is a dictionary type data-structure.it is a sequence of key-value pair,where only a single value is associted with each unique key,in a map key values are generally used to sort the elements and data type of key and the value can be same can be different

#include<iostream>
#include<map>
using namespace std;
main()
{
map<char,int>m;
m['a']=1;
m['b']=2;
m['c']=3;
cout<<"map contains following elements"<<endl;
map<char,int>::iterator it;
for(it=m.begin();it!=m.end();it++)
cout<<it->first<<"="<<it->second<<endl;
}

