#include<iostream>

#include<string.h>
using namespace std;

class test {
char *value;
int len;
public:

test(){
len=0;
value=0;
}
test(char *s){
len=strlen(s);
value=new char[len+1];
strcpy(value,s);
}
test (test &s)
{
    len=strlen(s.value);
    value=new char[len+1];
    strcpy(value,s.value);
}
    friend test&operator +(test obj1,test obj2)
    {
        test obj3;
        obj3.len=obj1.len+obj2.len;
        obj3.value=new char[obj3.len+1];
    strcpy(obj3.value,obj1.value);
    strcat(obj3.value,obj2.value);
return obj3;
}
friend int operator==(test obj1,test obj2)
{
int rel=0;
if(strcmp(obj1.value,obj2.value)==0)
{
rel=1;}
return rel;
}
friend int operator !=(test obj1,test obj2){
int rel=0;
if(strcmp(obj1.value,obj2.value)!=0)
{
  rel=1;
}

return rel;
}
friend int operator<(test obj1,test obj2)
{
int rel=0;
int result=0;
rel=strcmp(obj1.value,obj2,value)
if(rel<0)
{
 result=1;
}

return result;
}
friend int operator>(test obj1,test obj2)
{
int rel=0;
int result=0;
rel=strcmp(obj1.value,obj2.value);
if(rel>0)
{
    result=1;
}

return result;
}
void display()
{
cout<<"result is"<<value;
}

};
int main()
{
test obj1("xxxyyz");
test obj2("hello");
obj1.display();
obj2.display();
test obj3;
obj3=obj1+obj2;
obj3.display();
if(obj1==obj2)
cout<<"obj1 is equal to obj2";
else
cout<<"not equal";
if(obj1!=obj2)
cout<<"obj1 is not equal to obj2";
else
cout<<"objects are equal";
if(obj1>obj2)
cout<<"obj1 is greater than obj2";
if(obj1<obj2)
cout<<"obj1 is less than obj2";
}
