#include<iostream>
#include<string.h>
using namespace std;
class person_data
{
    char a[20];
    int age;
    float c;
public:
    person_data(char n[20],int x,float y)
    {
        strcpy(a,n);
        age=x;
        c=y;
    }
    void cal_age(int m)
    {
        age=m-age;
    }
    void cal_ht_cms()
    {
        c=c*100;
    }
    void show()
    {
        cout<<"Approxiamate age of person:"<<age<<endl<<"Age in cms:"<<c;
    }
};
int main()
{
 person_data p1("Ram",1975,1.05);
 p1.cal_age(2016);
 p1.cal_ht_cms();
  p1.show();
  return 0;
}
