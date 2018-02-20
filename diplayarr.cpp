#include <iostream>
using namespace std;

void read(int ,int *);
void display(int ,int *);
main() {
int a;
int b;
cin>>a;

read(a,&b);
display(a,&b);
}
void display(int a,int *b)
{
    cout<<"a is"<<a<<endl;
    for(int j=0;j<a;j++)
{cout<<*(b+j);
cout<<"j is"<<j;
}
}
void read(int a,int *b)
{
for(int i=0;i<a;i++)
cin>>*(b+i);
}
