#include<iostream>
using namespace std;
class student {
int rollno;
char section;
public :
void input();
void output();}
;
void student::input()
{
cin>>rollno;
cin>>section;}

inline void student::output()
{ cout<<rollno;
cout<<section;}

main()
{ student st;
st.input();
st.output();
}
