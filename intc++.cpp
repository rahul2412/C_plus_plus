#include<iostream>
using namespace std;
class abc {
int a[4];
double c;
char s;
public :
void dispay()

{ cout<<sizeof(a)<<"\n";
 cout<<sizeof(c)<<"\n"<<sizeof(s)<<"\n";
}};


main()
{ abc obj;
obj.dispay();
cout<<sizeof(obj);
}
