#include<iostream>
using namespace std;
class student
{
protected:
int roll_no;
public:
void get_number(int a)
{
roll_no=a;
}
void put_number()
{
cout<<"roll no is"<<roll_no<<endl;
}
};
class test:virtual public student
{
protected:
float part1,part2;
public:
void get_marks(float x,float y)
{
part1=x;
part2=y;
}
void put_marks()
{
cout<<"part1="<<part1<<endl;
cout<<"part2="<<part2<<endl;
}
};
class sports:virtual public student
{ protected:
float score;
public:
void get_score(int a) {
score=a;
 }
 void put_score() {
 cout<<"score="<<score<<endl;
 }};
 class result:public test,public sports
 {float total;
 public:
 void display()
 {total=part1+part2+score;
 put_number();
 put_marks();
 put_score();
 cout<<"total="<<total; }};
 main(){result ob;
 ob.get_number(123);
 ob.get_marks(50,20);
 ob.get_score(75);
 ob.display();
 }
