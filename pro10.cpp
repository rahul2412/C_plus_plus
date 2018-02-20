#include<iostream>
#include<string.h>
using namespace std;
class str
{
    char a[20];
public:
    str()
    {

    }
    void get()
    {
        cin.getline(a,20);
    }
    str operator+(str x)
    {
        str t;
        strcpy(t.a,strcat(a,x.a));
        return t;
    }
    str operator==(str x)
    {
        if(strcmp(a,x.a)==0)
        {
            cout<<"Equal"<<endl;
        }
        else
            cout<<"Not Equal"<<endl;
    }
    str operator>(str x)
    {
        if(strcmp(a,x.a)>0)
        {
            cout<<"s1 is greater"<<endl;
        }
        else
            cout<<"s2 is greater"<<endl;
    }
    void display()
    {
    cout<<a<<endl;
    }
};
int main()
{
    str s1,s2,s3,s4,s5;
    s1.get();
    s2.get();
    s3=s1+s2;
    s3.display();
    s4=s1==s2;
    s5=s1>s2;
}

