#include<iostream>
using namespace std;
class base{
public:
virtual void show()
{
cout<<"in base class"<<endl;
}
};
class derived:public base{
public:
void show(){
cout<<"In derived class"<<endl;
}
};
main()
{
base *b;
derived d;
b= &d;
b->show();//late binding
}
