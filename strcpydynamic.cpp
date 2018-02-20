#include<iostream>
#include<string.h>
using namespace std;
class str{
int length;
char *s;
public:
str()
{
length=0;
}
str(char *a)
{
length=strlen(a);
s=new char[length];
strcpy(s,a);
}
str(str &a)
{
length=a.length;
s=new char[length];
strcpy(s,a.s);
}
void show()
{
cout<<s<<"\n";
}
};
main()
{
str a("hello");
str b(a);
a.show();
b.show();
}
