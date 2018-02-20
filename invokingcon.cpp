#include<iostream>
#include<string.h>
using namespace std;
class student{
protected:
int roll_no;
char course[15];
public:
student(int rno,char *c)
{
roll_no=rno;
strcpy(course,c);
}
void show_rno()
{
cout<<"roll no is "<<roll_no<<endl;
}
};
class result:protected student
{
public:
int marks[3];
result(int rno,char *c,int m1,int m2,int m3):student(rno,c)
{ marks[0]=m1;
marks[1]=m2;
marks[2]=m3;}
int total()
{
int tot_marks=0;
for(int i=0;i<3;i++)
tot_marks+=marks[i];
return tot_marks;
}
void display()
{
show_rno();
cout<<"course="<<course<<endl;
cout<<"total marks:"<<total();
}
};
main()
{
int rno,m1,m2,m3;
char course[5];
cout<<"enter rollno";
cin>>rno;
cout<<"enter marks";
cin>>m1>>m2>>m3;
cout<<"enter courses";
cin.getline(course,15);
result ob(rno,course,m1,m2,m3);
ob.display();
}
