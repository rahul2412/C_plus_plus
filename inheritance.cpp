#include<iostream>
using namespace std;
class student
{
int roll;
protected:
char course[10];
public:
void get_rno()
{
cout<<"enter the roll no";
cin>>roll;
}
void show_rno()
{
cout<<"roll no is"<<roll<<endl;
}};
class result:public student
{
int marks[3];
public:
void get_data();
int total();
void display();
};
void result::get_data()
{
cout<<"enter course";
cin.ignore();
cin.getline(course,10);
for(int i=0;i<3;i++)
cin>>marks[i];
}
int result::total()
{
int tot=0;
for(int i=0;i<3;i++)
 tot=tot+marks[i];
    return tot;}
void result::display()
{ show_rno();
cout<<"course of student is"<<course;
cout<<"total marks="<<total();}

main()
{result ob;
ob.get_rno();
ob.get_data();
ob.display();}
