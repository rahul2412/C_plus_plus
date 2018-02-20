#include<iostream>
using namespace std;
class check {
float i;
public:
check() {
i=0.0;}
check operator ++() {
check temp;
temp.i=0.1+i;
return temp; }
check operator --(int)
{ check temp;
temp.i=i-0.1;
return temp;
}
void display() {
cout<<"i="<<i; }
};
main() {
check obj,obj1;
obj1=++obj;
obj1.display();

obj1=obj1--;
obj1.display();
}
