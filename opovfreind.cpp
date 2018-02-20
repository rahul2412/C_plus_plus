#include<iostream>
using namespace std;
class check {
int i;
public:
check() {
i=0;}


friend check &operator ++(check &);
friend check &operator ++(check &,int);

void display() {
cout<<"i="<<i; }};
check &operator ++(check & temp) {
temp.i=++(temp.i);
return temp; }
check &operator ++(check &temp,int)
{
temp.i=(temp.i)++;
return temp;
}

main() {
check obj,obj1;
obj1=++obj;
obj1.display();
obj.display();
obj1=obj++;
obj1.display();
obj.display();}
