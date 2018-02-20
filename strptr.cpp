#include <iostream>
using namespace std;
main()
{
char a[100];

cin.getline(a,100);
for(int i=0;a[i]!='\0';i++)
cout<<*(a+i);}
