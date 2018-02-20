#include <iostream>

using namespace std;
class numbers {
int n;
public:
numbers(numbers &N)
{
n=N.n;}
numbers(int i)
{
n=i;
n=5;}
void show()
{
cout<<"n="<<n;
}};
main() {
numbers o1(5);
numbers o2(o1);
o1.show();}

