#include<iostream>
#include<string.h>
void read(int *arr,int n);
void smallest(int *arr,int n,int *small,int *pos);
using namespace std;

main()
{ int *arr;
int n;

int *small;
int *pos;
read(arr,n);
 smallest(arr,n,small,pos);}

void read(int *arr,int n)
{  cin>>n;
for(int i=0;i<n;i++)
cin>>arr[i];}
void smallest(int *arr,int n,int *small,int *pos)
{ for(int i=0;i<n;i++)
{ if(arr[i+1]<arr[i])
{ *small=arr[i];
*pos=i+1;}}
cout<<*small<<" "<<*pos;}
