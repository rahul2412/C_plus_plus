#include<iostream>
using namespace std;
class staff
{ protected:
int code;
char name[10];
public:
void getd()
{cin>>code>>name;}
void gived()
{cout<<code<<name ;}
};
class teacher:public staff
{ protected:
char subject[10];
char publication[10];
public:
void get()
{ cin>>subject>>publication;
getd(); }
void show()
{cout<<subject<<publication;
gived();}
};
class officer:public staff
{ protected:
char grade;

public:
void get()
{ cin>>grade;
 }
void show()
{cout<<grade;
}
};
class typist:public staff
{ protected:
int speed;
public:
void getm()
{ cin>>speed;
 }
void showm()
{cout<<speed;
}
};
class regular:public typist
{ protected:
int salary;
public:
void get()
{ cin>>salary;
getm();
 }
void show()
{cout<<salary;
showm();
}
};
class casual:public typist
{ protected:
int wages;
public:
void get()
{ cin>>wages;
 }
void show()
{cout<<wages;
}
};
main()
{ teacher ob1;
officer ob2;
regular ob3;
casual ob4;
ob1.get();
ob1.show();
ob2.get();
ob2.show();
ob3.get();
ob3.show();
ob4.get();
ob4.show();
}
