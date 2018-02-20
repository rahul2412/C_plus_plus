#include<iostream>
#include<math.h>
using namespace std;
int main ()
{
float l,b,h,area,volume;
cout<<"Enter Length:";
cin>>l;
cout<<"Enter width:";
cin>>b;
cout<<"Enter height:";
cin>>h;
area=(2*((l*b)+(b*h)+(l*h)));
volume=(l*b*h);
cout<<"Area of cuboid:"<<area;
cout<<endl<<"Volume of cuboid:"<<volume;

return 0;
}
