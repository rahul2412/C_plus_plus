#include<iostream>
using namespace std;
class dist{
int k,m;
public:
    dist();
    dist(int);
    void get();
    void show();
    operator int();
    operator float();
};
dist::dist()
{
   k=0;
   m=0;
}
dist::dist(int x)
{
int a,b;
a=x/1000;
b=x%1000;

}
void dist::show(){
cout<<k<<" "<<m;}
void dist::get(){
    cin>>k>>m;
}
dist::operator int()
{ int x;
    x=k*1000+m;
    return x;
}
 dist::operator float() {}
main()
{ int d;
cin>>d;
dist obj1;
obj1=d;
obj1.show();
cout<<"enter kms and metres";
obj1.get();
d=obj1;
cout<<"total dist in metres"<<d;
float k=obj1;
cout<<"total distances in kms"<<k;}
