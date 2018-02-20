#include <iostream>
using namespace std;


class B;
class A {
    public:
    int *a;
    int l1;

      A();
      A(int);
      friend A merge_sort(A);
      // friend function declaration

};

class B {
    public:
    int *b;
    int l2;

      B();
      B(int);
      friend A merge_sort(B);
      // friend function declaration
     void display();};
     A::A(){}
     B::B()
     {
     }

     A::A(int x)
     { l1=x;
     a=new int[l1];
     for(int i=0;i<l1;i++)
     cin>>a[i];}
     B::B(int y)
     { l2=y;
     b=new int[l2];
     for(int i=0;i<l2;i++)
     cin>>b[i];}


A merge_sort(A objectA, B objectB)
{
 int *c;
 int m,n,k;
 m=objectA.l1;
 n=objectB.l2;
 c=new int[m+n];

 int j=0;
 for(int i=0;i<m;i++)
 {c[i]=objectA.a[i];}
 for(int i=m;i<m+n;i++)
 {
 c[i]=objectB.b[j];
 j++;}

 a=new int[m+n];
 for(int i=0;i<m+n;i++)
 b[i]=c[i];
  l2=l1+l2;
}
void B::display()
{ for(int i=0;i<l2;i++)
cout<<b[i];}

int main()
{ int x,y;
    A objectA;
    B objectB;
   cin>>x;
   objectA(x);
    cin>>x;
   objectB(y);
   merge_sort(A objectA,B objectB);

   objectB.display();
    return 0;
}
