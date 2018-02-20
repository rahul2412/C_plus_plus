#include <iostream>

using namespace std;
class Distance{
int feet;
float inches;
public:
void setdistance(int f,float in)
{
feet=f;
inches=in;
}
void getdist()
{ cout<<"enter feet";
cin>>feet;
cout<<"get inches";
cin>>inches;
}
void showdist(){
cout<<"feet="<<feet<<"inches="<<inches;}};
main() {
Distance d1,d2;
d1.setdistance(4,5.5);
d2.getdist();
d1.showdist();
d2.showdist();}
