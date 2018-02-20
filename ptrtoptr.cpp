#include<iostream>
using namespace std;
int main()
{
int num;
cin>>num;
int *ptr1;
int **ptr2;
**ptr2;
ptr1=&num;
ptr2=&ptr1;
cout<<"value of num is "<<num;
cout<<"value of num using ptr is "<<*ptr1<<endl;
cout<<"value of num using ptr2 is "<<**ptr2<<endl;
cout<<"address of num is "<<ptr1<<endl;
cout<<"address of num is "<<*ptr1<<endl;
cout<<"address of ptr1 is "<<ptr2<<endl;
cout<<"address of ptr2 is "<<&ptr2<<endl;
}
