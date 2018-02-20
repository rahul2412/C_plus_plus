#include<iostream>
using namespace std;
class dist{
int meters;
int kms;
friend int convert(dist &);

public:
void get() {
cout <<"enter metres & kms";
cin>>meters>>kms;
}};
int convert(dist &d)
{ return (((d.kms*1000)+ d.meters));
}
main()
{
dist d;
d.get();
cout<<"total dist="<<convert(d);}
