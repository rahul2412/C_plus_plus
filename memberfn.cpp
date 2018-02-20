#include <iostream>

using namespace std;
class abc
{ int c;
int k;
public:
void plus()
{ c+=2;
k+=2;}
void show() {
cout<<"c="<<c<<" "<<"k="<<k;}
};
main()
{
static abc ob;
ob.plus();
ob.show();}
