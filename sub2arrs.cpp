#include<iostream>
using namespace std;
void read(int **a,int row,int col)
{
for(int i=0;i<row;i++)
{
for(int j=0;j<col;j++)
cin>>a[i][j];
}
}
void subtract(int **a,int **b,int r,int c)
{
for(int i=0;i<r;i++)
{
for(int j=0;j<c;j++)
a[i][j]-=b[i][j];
}
}
void display(int **a,int row,int col)
{
for(int i=0;i<row;i++)
{
for(int j=0;j<col;j++)
cout<<a[i][j]<<" ";
cout<<endl;
}
}
main()
{
int row,col;
cin>>row>>col;
int **arr=new int *[row];
int **arr1=new int *[row];
for(int i=0;i<row;i++)
{
arr[i]=new int [col];
arr1[i]=new int [col];
}
read(arr,row,col);
read(arr1,row,col);
subtract(arr,arr1,row,col);
display(arr,row,col);
for(int i=0;i<row;i++)
{delete[]arr[i];
delete[]arr1[i];}

}
