#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;





bool check(int n)
{ return((n%2)==0);}
main()
{
int a[]={10,2,3,4,5};
vector<int>v(a,a+5);
vector<int>::iterator it;
it=find_if(v.begin(),v.end(),check);
if(it!=v.end())
cout<<"first even no. is"<<*it<<endl;
v.clear();
v.push_back(1);
it=find_if(v.begin(),v.end(),check);
if(it==v.end())
cout<<"only odd elements are present";
else
cout<<"even no. is"<<*it<<endl;}
