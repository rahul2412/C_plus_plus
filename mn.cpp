#include<iostream>
using namespace std;
class kms;
class mtrs {
    int m;
public:
    mtrs();
    mtrs(int x);
    void show();
};
class Kms
{
    int mt,km;
public:
    kms(int x,int y);
    operator mtrs();
    void display();
};
main()
{

    kms source(12,200);
    source.display();
    mtrs dist;
    dist=source;
    dist.show();
}
