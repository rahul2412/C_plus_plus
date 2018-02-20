#include<iostream>
using namespace std;
class numbers
{
int n;
public:
numbers() {
n=2;
cout<<"constructor is called";}
~numbers()
{
cout<<"destructor is called ";
}};
main()
{  numbers n1;
numbers n2;
numbers n3;}
