#include<iostream>
using namespace std;
class abc {
int a;
float c;
char s[6];
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
