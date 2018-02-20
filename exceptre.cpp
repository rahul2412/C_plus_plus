#include<iostream>


using namespace std;
void sub(int j,int k)
{ cout<<"inside function sub\n";
try
{
if(j==0)
throw j;

else
cout<<"subtraction is="<<j-1<<endl;}
catch(int)
{
cout<<"caught null value\n";
throw;
}
cout<<"end of sub()"<<endl;
}
main() {
cout<<"inside main function\n";
try {
sub(8,5);
sub(0,8); }
catch(int) {
cout<<"caught null inside main\n";
}
cout<<"end of main function\n";}
