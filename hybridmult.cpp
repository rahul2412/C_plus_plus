#include<iostream>
using namespace std;
class  person {
protected:
char name[30];
int age;
char gender;
public:
void get_person_data();
void show_person_data(); };
void person::get_person_data()
{ cin>>name>>age>>gender ;}
void person::show_person_data()
{ cout<<name<<age<<gender ;}
class student:public person {
protected:
int roll_no;
char course[10];
public:
void get_student_data();
void show_student_data();};
void student::get_student_data()
{  cin>>roll_no;
    cin.getline(course,10);
    get_person_data();

 }
void student::show_student_data()
{  cout<<roll_no<<course;
show_person_data(); }
class faculty:public person
{
protected:
char dept[20];
char design[20];
public:
void get_faculty_data();
void show_faculty_data(); };
void faculty::get_faculty_data()
{
    cin>>dept>>design;
}
void faculty::show_faculty_data()
{
    cout<<dept<<design;
}

class publication:public faculty
{ int no_article;
int no_books;
int no_research;
public:
void get_data();
void show_data();
};
void publication::get_data()
{
    cin>>no_article>>no_books>>no_research;
    get_faculty_data();
}
void publication::show_data()
{
    cout<<no_article<<no_books<<no_research;
show_faculty_data();
}
main() {
student ob;
ob.get_student_data();
ob.show_student_data();
publication ob2;
ob2.get_data() ;
ob2.show_data() ;}
