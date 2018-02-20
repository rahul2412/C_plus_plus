//parameterized constructor in multilevel inheritance
#include<iostream>
#include<string.h>
using namespace std;
class student{
int roll_no;
char name[20];
char course[10];
public:
    student(int r, char *n, char *c)
    {
        roll_no= r;
        strcpy(name, n);
        strcpy(course, c);
    cout<<"in student class" <<endl;
    }
    ~student(){
    cout<<"in distruction of student class"<<endl;}
    int get_rno(){
    return roll_no;
    }
    char *get_name(){
    return name;
    }
    char *get_course(){
    return course;
    }
    };
    class marks : public student{
protected:
    int mark[3];
public:
    marks(int r, char *n, char *c, int m1, int m2, int m3):student (r, n , c)
    {
    mark[0]=m1;
    mark[1]=m2;
    mark[2]=m3;
    cout<<"in marks class const. "<<endl;
    }
    ~marks(){
    cout<<"in marks class destruction " <<endl;

    }
    int total()
    {
        return (mark[0]+mark[1]+mark[2]);
    }
    };
    class result: public marks{
public:
    result(int r, char *n, char *c, int m1, int m2, int m3):marks(r, n, c, m1, m2, m3)
    {
        cout<<"in result class construction "<<endl;

    }
    ~result()
    {
        cout<<"in result class distructor"<<endl;
    }
    void display(){
    cout<<"rollno= "<<get_rno()<<endl;
    cout<<"name= "<<get_name()<<endl;
    cout<<"course= "<<get_course()<<endl;
    cout<<"total marks= "<<total()<<endl;
    }
    };
    main()
    {
        int rno, m1, m2, m3;
        char n[20];
        char c[10];
        cout<<"enter roll_no: ";
        cin>>rno;
        cout<<"enter name: ";
        cin.ignore();
        cin.getline(n, 20);
        cout<<"enter course: ";
        cin.getline(c,10);
        cout<<"enter marks in 3 subjetc: ";
        cin>>m1>>m2>>m3;
        result r(rno, n, c , m1, m2, m3);
        r.display();

    }
