#include<iostream>
using namespace std;
main()
{
int row,col;
cin>>row>>col;
int **arr=new int *[row];
int **arr1=new int *[row];
for(int i=0;i<row;i++)
arr[i]=new int [col];
for(int i=0;i<row;i++)
{
for(int j=0;j<col;j++)
cin>>arr[i][j];
}
for(int i=0;i<row;i++)
arr1[i]=new int [col];
for(int i=0;i<row;i++)
{
for(int j=0;j<col;j++)
cin>>arr1[i][j];
}
for(int i=0;i<row;i++)
{
for(int j=0;j<col;j++)
{ arr1[i][j]+=arr[i][j];
}}
for(int i=0;i<row;i++)
{
for(int j=0;j<col;j++)
{ cout<<arr1[i][j]<<endl;
}} }
