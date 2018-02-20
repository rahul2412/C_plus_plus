#include<iostream>
using namespace std;
class times{
int h,m;
public:
    times()
    {
        h=m=0;
    }
    times(int t)
    {
        h=t/60;
        m=t%60;
    }
void get() { cin>>h>>m; }
void show() {
cout<<h<<" "<<m;}
operator int() {
int t;
t=h*60+m;
return t;
}};
 main()
    {
        int min;
        cout<<"enter minutes";
        cin>>min;
        times t1;
        t1=min;
        t1.show();
        t1.get();
        min=t1;
        cout<<"total minutes"<<min;
    }
