#include<iostream>
using namespace std;
void print(int);
void (*fp)(int);
main()
{
fp=print;
print(10);
(*fp)(20);
(fp)(30);}
void print(int a)
{
cout<<a<<endl;}
