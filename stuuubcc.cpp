#include<iostream>
using namespace std;
class person
{
char *name;
public:
void getname();
void putname();
virtual void getdata()=0;
virtual bool isoutstanding()=0;
};
void person::getname()
{
cout<<"Enter name = ";
name=new char[100];
cin>>name;
}
void person::putname()
{
cout<<name<<endl;
}
class student:public person
{
float cgpa;
public:
void getdata();
bool isoutstanding();
};
void student::getdata()
{
 getname();
 cout<<"Enter CGPA = ";
cin>>cgpa;
}
bool student::isoutstanding()
{
if(cgpa>7.5)
{
return 1;
}
else
{
return 0;
}
}
class professor:public person
{
int num_P;
public:
void getdata();
bool isoutstanding();
};
void professor::getdata()
{
    getname();
    cout<<"Enter NUM_P = ";
cin>>num_P;
}
bool professor::isoutstanding()
{
if(num_P>100)
{
return 1;
}
else
{
return 0;
}
}
main()
{
person *persptr[100];
int n=0;
char choice;
cout<<"Enter number of cases = ";
int T;
cin>>T;
while(T--){
cout<<"Enter choice = ";
cin>>choice;
if(choice=='s')
persptr[n]=new student;
else
persptr[n]=new professor;
persptr[n++]->getdata();
}
for(int j=0;j<n;j++)
{
persptr[j]->putname();
if(persptr[j]->isoutstanding())
cout<<"^^^^ THIS PERSON IS OUTSTANDING"<<endl;
}
}
