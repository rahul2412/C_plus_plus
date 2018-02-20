#include<iostream>
using namespace std;
class account{
    char customername[10];
    int accno;
    int type;
    public:
   int choice()
    { cin>>accno>>customername;
        cout<<"type of acc";
        cin>>type;
        return type;
    }

};
class current:public account{
int bal=1000;
public:
    void deposit(int amt)
    {
        bal+=amt;

    }
    void balance()
    {
        cout<<bal;

    }
    void with(int amt)
    {
        bal-=amt;

    }
    void sr(int t)
    {
        int si;
        si=(bal*4*t)/100;

    }
    };
class savings:public account{
int bal=1100;
public:
    void deposit(int amt)
    {
        bal+=amt;

    }
    void balance()
    {
        cout<<bal;

    }
    void with(int amt)
    {
        bal-=amt;

    }
    void sr(int t)
    {
        int si;
        si=(bal*4*t)/100;
        cout<<si;

    }
    };
    main()
{ int c;
     current ob1;
savings ob2;

account ob3;
c=ob3.choice();
switch(c)
{


case 1:
    ob1.deposit(1000);
    ob1.balance();
    ob1.with(500);
      ob1.balance();
    ob1.sr(2);
break;
default:
    ob2.deposit(1000);
    ob2.balance();
    ob2.with(500);
      ob2.balance();
    ob2.sr(2); }



}
