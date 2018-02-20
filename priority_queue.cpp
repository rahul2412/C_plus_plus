//type of containers such that its first element is always the greatest of the elements it contains and its functions are declared under the header file queue
//empty(),pop(),push(),size(),top(),swap()
#include <iostream>
#include<queue>
using namespace std;
main()
{
priority_queue<int>p;
int sum=0;
for(int i=0;i<10;i++)
 p.push(i);
while(!p.empty())
{sum+=p.top();
p.pop();}
cout<<"sum="<<sum;}
