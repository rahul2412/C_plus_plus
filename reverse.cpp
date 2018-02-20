#include<iostream>
#include<list>
#include<vector>
using namespace std;
main(){
list<int>l;
for(int i=1;i<10;i++){
l.push_back(i);
}
l.reverse();
cout<<"list contains";
list<int>::iterator it;
for(it=l.begin();it!=l.end();it++){
cout<<*it;
}
}
