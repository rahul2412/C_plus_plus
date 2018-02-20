//they  specify how individual classes can be constructed supports simiar data types the template clas supports prefic template class t where t is the name of temoplate
//when we use with various data members

#include<iostream>
using namespace std;
template<class type>
class Arr
{
type *ar;
int size;
public:
Arr(int n)
{
size=n;
ar=new type[size];
}
void read()
{
for(int i=0;i<size;i++)
cin>>ar[i];
}
void show();
};
template<class type>
void Arr<type>::show(){
for(int i=0;i<size;i++)
cout<<ar[i];}
main()
{
Arr<int>ob(5);
cout<<"Enter integer array"<<endl;
ob.read();
cout<<"Enter array is"<<endl;
ob.show();
Arr<char>ob1(7);
cout<<"Enter character array"<<endl;
ob1.read();
cout<<"Enter array is"<<endl;
ob1.show();
}
