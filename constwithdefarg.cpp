#include<iostream>
using namespace std;
class student {
int rollno;
int marks;
public:
student() {
rollno=0;
marks=0;}
student(int r,int m=0)
{ rollno=r;
marks=m;
}
void show()
{ cout<<"roll no is"<<rollno;
cout<<"marks is"<<marks;}};
main()
{ student ob;
ob.show();
student ob2(3);
ob2.show();
student ob3(5,90);
ob3.show();}
