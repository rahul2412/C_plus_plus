#include<iostream>
using namespace std;
class prime
{
   int a,k,i;
   public:
   prime(int x)
   {
     a=x;
   }
   void calc();
   void print();
};
void prime::calc()
{
    k=1;
    for(i=2;i<a/2;i++)
    {
       if(a%i==0)
       {
          k=0;
          break;
       }
       else
          k=1;
     }
}
void prime::print()
{
    if(k==1)
       cout<<"\nPrime Number";
    else
       cout<<"\nNot Prime";
}
void main()
{
    int n;

    cout<<"\nEnter the number:\n";
    cin>>n;
    prime e(n); // parameterised constructor call
    e.calc();
    e.print();

}
