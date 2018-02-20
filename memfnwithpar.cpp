#include <iostream>

using namespace std;

class part{
int model_no;
int part_no;
float cost;
public:
void setpart(int mn,int pn,float c)
{ model_no=mn;
part_no=pn;
cost=c;}
void display() {
cout<<"modelno="<<model_no<<"\n"<<"part-no="<<part_no<<"\n"<<"cost="<<cost<<"\n";
}};
main()
{
part o1;
o1.setpart(245,373,215.5);
o1.display();}
