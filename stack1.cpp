//stack are type of container desighn to operate in lifo context i.e last in first out here the elements are pushed or pop only
//from one end of container which is pop or stck empty(),pop(),push(),size(),swap(),top();
#include<iostream>
#include<stack>
using namespace std;
main()
{
 stack<int>s;
 cout<<"Initial size is "<<s.size();
 for(int i=0;i<5;i++)
 s.push(i);
 cout<<"1 size ="<<s.size()<<endl;
 s.pop();
 cout<<"second size = "<<s.size();
}
