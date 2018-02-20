#include <iostream>
#include<string.h>
using namespace std;
class data {
int x;
int f;
public:
    data() {
x=0;
f=0; }
data(float m) {
x=2;
f=m;}
void show() {
cout<<"\n";
cout<<"f="<<f;
}};
main()
{ data z;
z=1;
z.show();
z=2.5;
z.show();}
