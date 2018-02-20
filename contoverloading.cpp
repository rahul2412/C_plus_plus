#include<iostream>
using namespace std;
class area {
int length;
int breadth;
public:
area() {
length=5;
breadth=2;}
area(int l,int b)
{
length=l;
breadth=b;
}
void get_length()
{
cin>>length>>breadth;
}
int calculate()
{
return length*breadth;}
void display(int temp)
{
cout<<"area"<<temp<<endl;}
};
main() {
area a1,a2(2,1);
int temp;
cout<<"default area is";
temp=a1.calculate();
a1.display(temp);
cout<<"when arg is passed ";
temp=a2.calculate();
a2.display(temp);
}
