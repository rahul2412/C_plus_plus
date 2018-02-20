#include<iostream>
using namespace std;
class test {
public:
void display()
{ cout<<"hello world"; }};
main() {
void (test::*fp)(void);
fp=&test::display;
test t;
(t.*fp)();}
