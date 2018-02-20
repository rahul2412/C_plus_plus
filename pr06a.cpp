#include<iostream>
#include<string.h>
using namespace std;
class data
{
    char a[20];
   public:
       data(char x[20])
       {
           strcpy(a,x);
       }
       void show()
       {
        cout<<a;
       }
       void compare(data d1)
       {

       }
       ~data()
       {
           cout<<"\n Release memory allocated to Obfuscation";
       }
};
int main()
{
data d1("obfuscation");
data d2("obstruction");
cout<<"Data 1=";
d1.show();
cout<<endl<<"Data 2=";
d2.show();
cout<<endl<<"Both objects have different text"<<endl;
d1.compare(d2);
return 0;
}
