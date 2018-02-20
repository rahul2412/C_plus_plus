#include<iostream>
using namespace std;
class item{
int code;
float price;
int qty;

void values()
{code=1;
price=200;
qty=10;}
public:
void show()
{ values();

cout<<"code is="<<code<<endl;
cout<<"price is="<<price<<endl;

cout<<"qty is="<<qty<<endl;
}};
main()
{
    item obj;
    obj.show();
}



