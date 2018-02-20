#include<iostream>
using namespace std;
class arr{
int *a;
int n;
int l;
public:
arr(int p)
{ n=p;
a=new int[n];

for(int i=0;i<n;i++)
cin>>a[i];}



void show()
{
cout<<l;}
int largest()
{ int large,i;
large=a[0];
 for(i=0;i<n;i++)
{if(a[i]>large)
large=a[i];}
l=large;
return 0;}};
main()
{ arr o1(5);
o1.largest();
o1.show();

}
