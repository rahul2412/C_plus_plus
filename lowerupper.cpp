#include<iostream>
#include<string.h>

using namespace std;

main()
{
char str[100];
char *p;
p=str;
cin.getline(str,100);
int l;
int count1=0;
int count2=0;


l=strlen(str);
int i;
for(i=0;i<l;i++)
{ if((p[i]>=65) &&(p[i]<=90))
count1++;
if((p[i]>=97) &&(p[i]<=122))
count2++;
}
cout<<"uppercase is "<<count1<<endl;
cout<<"lowercase is "<<count2<<endl;}
