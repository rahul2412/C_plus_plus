#include <iostream>

using namespace std;


class abc
{
int a;
public:
abc(int i) {
a=i; }
void show()
{
cout<<"a="<<a;
}};
main()

{abc ob(10);
ob.show();}
