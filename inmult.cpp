//parameterized constructor in hierarchical inheritance
#include<iostream>
#include<string.h>

using namespace std;
class student{
protected:
int roll_no;
char name[20];
public:
student(int rno, char *n)
{
roll_no= rno;
strcpy(name, n);
}
~student(){
cout<<"in student destructor\n";}};

class academic: public student{
protected:
int marks;
char grade;
public:
academic (int rno, char *n, int m , int g):student(rno, n)
{
marks= m;
grade=g;
}
~academic(){
cout<<"in academic destructor\n";
}
void show_details()
{
cout<<"roll no= "<<roll_no<<endl;
cout<<"name= "<<name<<endl;
cout<<"marks= "<<marks<<endl;
cout<<"grade= "<<grade;}};

class accounts:public student{
protected:
float fees;
char dues;
public:
accounts(int rno, char *n, float f, char d):student(rno, n)
{
fees=f;
dues=d;
}
~accounts(){
cout<<"in accounts destruction";
}
void show_acc_details(){
cout<<"rollno= "<<roll_no<<endl;
cout<<"name= "<<name<<endl;
cout<<"fees= "<<fees<<endl;
cout<<"dues= "<<dues<<endl;}};
main(){
int rno, m;
char n[20],g,d;
float f;
cout<<"enter rollno: ";
cin>>rno;
cout<<"enter name: ";
cin.ignore();
cin.getline(n,20);
cout<<"enter fees: ";
cin>>f;
cout<<"is there any dues[y/n]: ";
cin>>d;
accounts ob(rno, n, f, d);
ob.show_acc_details();
cout<<"enter marks";
cin>>m;
cout<<"enter grade: ";
cin>>g;
academic ob2(rno, n, m, g);
ob2.show_details();
}
