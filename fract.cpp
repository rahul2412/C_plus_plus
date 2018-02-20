//2 fractional numbers using call by address
#include<iostream>
using namespace std;
class fraction{
int n1,n3,n2,d1,d2,d3;
void getno{
cout<<"num and den of 1st no. \n";
cin>>n1>>d1;
cout<<"num and den of 2nd no. \n";
cin>>n2>>d2;}
void sub(fraction *);};
void fraction::sub(product *ob)
{ob->n3=ob->(n1*d2)-ob->(n2*d1);
ob->d3=ob->(d1*d2);
cout<<ob->n3<<" and "<<ob->d3;}
main()
{

    fraction ob;
    ob.getno();
    ob.sub(&ob);}
