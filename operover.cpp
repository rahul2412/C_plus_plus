#include<iostream>
using namespace std;
class check {
int i;
public:
check() {
i=0;}
check operator ++() {
check temp;
temp.i=++i;
return temp; }
check operator ++(int)
{ check temp;
temp.i=i++;
return temp;
}
void display() {
cout<<"i="<<i; }
};
main() {
check obj,obj1;
obj1=++obj;
obj1.display();
obj.display();
obj1=obj++;
obj1.display();
obj.display();}
