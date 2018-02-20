#include<iostream>
using namespace std;
class Array {
int *arr;
public:
void*operator new(size_t size)
{ void *parr=::new int[size];
return parr;
}
void operator delete(void *parr)
{ ::delete parr;}
void get()
{
cout<<"enter the elements";
for(int i=0;i<5;i++)
cin>>arr[i];
}
void output(){
cout<<"enter elements are";
for(int i=0;i<5;i++)
cout<<arr[i];
}};
main()
{
Array *A=new Array;
A->get();
A->output();
delete A;
}
