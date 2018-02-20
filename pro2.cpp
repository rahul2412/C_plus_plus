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
    void add(complex x)
    {
        complex temp;
        temp.real=real+x.real;
        temp.imag=imag+x.imag;
        cout<<"Addition:"<<endl<<temp.real<<"+"<<temp.imag<<"i"<<endl;
    }
    void subtract(complex x)
    {
        complex temp;
        temp.real=real-x.real;
        temp.imag=imag-x.imag;
        if(temp.imag>0)
        cout<<"Subtraction:"<<endl<<temp.real<<"+"<<temp.imag<<"i"<<endl;
        else
        cout<<"Subtraction:"<<endl<<temp.real<<temp.imag<<"i"<<endl;
    }
    void multiply(complex x)
    {
        complex temp;
        temp.real=real*x.real-imag*x.imag;
        temp.imag=real*x.imag+imag*x.real;
        if(temp.imag>0)
        cout<<"Multiplication:"<<endl<<temp.real<<"+"<<temp.imag<<"i"<<endl;
        else
        cout<<"Multiplication:"<<endl<<temp.real<<temp.imag<<"i"<<endl;

    }
    void divide(complex x)
    {
        complex temp;
        temp.real=(real*x.real+imag*x.imag)/(x.real*x.real+x.imag*x.imag);
        temp.imag=(imag*x.real-real*x.imag)/(x.real*x.real+x.imag*x.imag);
        if(temp.imag>0)
        cout<<"Division:"<<endl<<temp.real<<"+"<<temp.imag<<"i"<<endl;
        else
        cout<<"Division:"<<endl<<temp.real<<temp.imag<<"i"<<endl;
    }
};
int main()
{
    complex c1,c2;
    c1.get();
    c2.get();
    c1.add(c2);
    c1.subtract(c2);
    c1.multiply(c2);
    c1.divide(c2);
}
