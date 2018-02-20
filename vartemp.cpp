#include<iostream>
using namespace std;
template<class t1,class t2,class t3,class t4>
class employee
{
t1 emp_id;
t2 desig;
t3 salary;
t4 status;
public:
void setdata(t1 eid,t2 des,t3 sal,t4 st)
{
emp_id=eid;
desig=des;
salary=sal;
status=st;
}
void show()
{
cout<<"employee is "<<emp_id;
cout<<"designation is "<<desig;
cout<<"salary="<<salary;
cout<<"status is"<<status;
}
};
main()
{
int id;
char desig[50];
float salary;
char status;
cin>>id;
cin>>desig;
cin>>salary;
cin>>status;
employee<int,char*,float,char>ob;
ob.setdata(id,desig,salary,status);
ob.show();
}
