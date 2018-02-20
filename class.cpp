#include<iostream>
using namespace std;
class item{ private:
int code;
float price;
int qty;
public:
void show()
{code=125;
price=100.5;
qty=200;
cout<<"code is="<<code<<endl;
cout<<"price is="<<price<<endl;

cout<<"qty is="<<qty<<endl;}
};
main()
{
    item obj;
    obj.show();
}



