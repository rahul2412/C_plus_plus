#include<iostream>
using namespace std;
class time
{
    int hr,min,sec;
public:
    time()
    {
        hr=0;
        min=0;
        sec=0;
    }
    void get()
    {
       cin>>hr>>min>>sec;
    }
    void add(time t1)
    {
        time temp;
        temp.sec=sec+t1.sec;
        temp.min=min+t1.min;
        temp.hr=hr+t1.hr;
        if(temp.sec>=60)
        {
            temp.sec=temp.sec-60;
            ++temp.min;
        }
        if(temp.min>=60)
        {
            temp.min=temp.min-60;
            ++temp.hr;
        }
        cout<<temp.hr<<" hr "<<temp.min<<" min "<<temp.sec<<" sec ";
    }
};
int main()
{
    time t1,t2;
    t1.get();
    t2.get();
    t1.add(t2);
}


