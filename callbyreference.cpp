#include<iostream>
using namespace std;
class product{
int mfgyr;
int expyr;
int yr;
public:
void getyr()
{cout <<"enter manufacturer yr and expiry yr ";
cin>>mfgyr>>expyr;
}
void time(product &);
};
void product::time(product &y)
{
yr=y.expyr-y.mfgyr;
cout<<"life of product is "<<yr<<"years";}
main()
{

    product ob;
    ob.getyr();
    ob.time(ob);}


