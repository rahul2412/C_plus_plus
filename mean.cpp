#include<iostream>
using namespace std;
class dist{

int n1,n2,n3;
friend float convert(dist &);

public:
void get() {
cout <<"enter 3 numbers \n";
cin>>n1>>n2>>n3;
}};
float convert(dist &d)
{ return ((float)(d.n1+d.n2+d.n3)/3);
}
main()
{
dist d;
d.get();
cout<<"mean= "<<convert(d);}
