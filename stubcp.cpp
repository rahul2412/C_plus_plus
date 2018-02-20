//a class named person has name as its data member and has function sfor entering and displaying the name
//it has 2 pure virtual functions get data and isoutstanding another class student is inheriting the person class
//having get data function to a accept the cgpa of student and is outstanding function to return true if cgpa is greater than 7.5 otherwise
//there is another class proffesor which is inheriting person class and will accept no of publications through get data and
//outstanding function will return true if the no. of publication is greater than hundred and false otherwise//

#include<iostream>
using namespace std;
class person
{
    char *name;
public:
    void getname();
    void putname();
    virtual void getdata()=0;
    virtual bool isoutstanding()=0;
};
class student:public person
{
  float cgpa;
  public:
      void getdata();
      bool isoutstanding();
};
class professor:public person{
int num_p;
public:
    void getdata();
    void outstanding();
};
main()
{
    person *persptr[100];
    int n=0;
    char choice;
    int T;
    cin>>T;
    while(T--){
        cin>>choice;
    if(choice=='s')
        persptr[n]=new student;
    else
        persptr[n]=new professor;
    persptr[n++]->getdata();
}
for(int j=0;j<n;j++)
{
    persptr[j]->putname();
    if(persptr[j]->isoutstanding)
        cout<<"this person is outstanding"<<endl;
}
}
