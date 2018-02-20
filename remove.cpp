#include<iostream>
#include<list>
#include<vector>
using namespace std;
main(){
int mylists[]={27,10,11,2};
list<int>mylist(mylists,mylists+4);
mylist.remove(10);
cout<<"list contains";
list<int>::iterator it;
for(it=mylist.begin();it!=mylist.end();it++){
cout<<*it;
}}
