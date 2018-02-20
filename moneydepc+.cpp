#include<iostream>
using namespace std;
class money {
    private:
int acc;
int mon,amt;
char name[20];
public:
money()
{

 amt=5000;
cout<<"enter acc no and "<<" name ";
cin>>acc>>name;
cout<<"current amt is "<<amt; }
int dep() {
cout<<"money to deposit ";
cin>>mon;
amt=amt+mon;
return amt;
}
int with() {
cout<<"money to withdraw ";
cin>>mon;
amt=amt-mon;
return amt; }};

int main()
{ int choice,l;
money m1;
cout<<" 1 is deposit and 2 is withdraw ";
cin>>choice;
if(choice==1)
l=m1.dep();
else
l=m1.with();
cout<<"amt is "<<l;
}

