#include<iostream>
using namespace std;

class books{
char title[30];
float price;
public:
void getdata();
void putdata();};
void books::getdata()
{ cout<<"title";
cin>>title;
cout<<"price";
cin>>price;}
void books::putdata()
{ cout<<"title"<<title<<"\n"<<"price";}
int main()
{ books obj[3];
for(int i=0;i<3;i++)
{cout<<"enter details of books"<<(i+1)<<"\n";
obj[i].getdata();}
for(int j=0;j<3;j++)
{
cout<<"books"<<(j+1)<<"\n";
obj[j].putdata();
}}
