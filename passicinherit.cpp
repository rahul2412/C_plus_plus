#include<iostream>
using namespace std;
class student{
protected:
int rollno;
char course[20];
public:
void getdata()
{
cout<<"enter rollno";
cin>>rollno;
cout<<"enter course of student";
cin.ignore();
cin.getline(course,20);
}
int getrollno()
{return rollno;}
char * getcourse()
{
return course;
}
};
class result:public student{
protected:
int marks[3];
public:
void getmarks()
{
for(int i=0;i<3;i++)
cin>>marks[i];
}
int total()
{
int tot=0;
for(int i=0;i<3;i++)
tot=tot+marks[i];
return tot;
}};
class display:public result{
public:
void output()
{
cout<<getrollno();
cout<<getcourse();
cout<<total();}};
main()
{
display ob;
ob.getdata();
ob.getmarks();
ob.output();
}
