//intialisation with the help of constructor
#include<iostream>
using namespace std;
class A1{
protected:
char name[15];
int age;
public:
A1(){
cout<<"enter name";
cin.getline(name,15);
cout<<"enter age";
cin>>age;
}
~A1(){
cout<<"name="<<name<<"\n";
cout<<"Age="<<age<<"\n";
}};
class A2:public A1{
protected:
float height,weight;
public:
A2(){
cout<<"enter height and weight";
cin>>height>>weight;
}
~A2(){
cout<<"height="<<height;
cout<<"weight="<<weight;
cout<<endl;}};
class A3:public A2{
char gender;
public:
A3(){
cout<<"enter gender";
cin>>gender;
}
~A3(){
cout<<"gender is"<<gender<<endl; }};
main()
{ A3 obj;}
