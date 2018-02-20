#include<iostream>
using namespace std;
class complex
{
    int real,imag;
    public:
      void get()
      {
          cin>>real>>imag;
      }
      friend void add(complex,complex);
};
void add(complex x1,complex x2)
{
    complex temp;
    temp.real=x1.real+x2.real;
    temp.imag=x1.imag+x2.imag;
    cout<<"Addition is:"<<temp.real<<"+"<<temp.imag<<"i";
}
int main()
{
    complex c1,c2;
    c1.get();
    c2.get();
    add(c1,c2);

}

