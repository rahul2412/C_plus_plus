#include<iostream>
using namespace std;
class marks{
public:
int maths;
int science;
marks() {
cout<<"inside constructor";
cout<<"object created";}
~marks()
{
cout<<"inside destructor";
cout<<"object destroyed";}};
main() {
{marks m1;}
cout<<"hello world"<<endl;
cout<<"hello world"<<endl; }
