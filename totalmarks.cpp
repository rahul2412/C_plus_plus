#include<iostream>
using namespace std;
int main()
{ int a,i,sum=0,total=500;
float perc;
 for(i=0;i<5;i++)
{cin>>a;
sum=sum+a;}
cout<<sum<<"\n";
perc=(float)(100*sum)/total;
cout<<perc;}
