#include <iostream>
#include<queue>
using namespace std;
main()
{
priority_queue<int>q;
q.push(30);
q.push(100);
q.push(150);
q.push(25);
cout<<"printing elements";
while(!q.empty())
{cout<<q.top();
q.pop();}
}
