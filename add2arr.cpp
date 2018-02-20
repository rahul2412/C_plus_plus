#include<iostream>
using namespace std;
class arr { int *a;
int r;
public:
arr();
arr(int);
arr operator+ (arr);
void display();
};
arr::arr()
{ r=0;}
arr::arr(int p)
{r=p;
a=new int[r];

int i;


for(i=0;i<r;i++)
cin>>a[i];
}
arr arr::operator+(arr o)
{ int i;
for(i=0;i<r;i++)
{ a[i]=a[i]+o.a[i];}
return *this; }
void arr::display()
{ for(int i=0;i<r;i++)
cout<<a[i]; }

main()
{
int x;
cin>>x;
arr a1(x);
arr a2(x);
a1=a1+a2;
a1.display();
}


