#include<iostream>
using namespace std;
int volume( int l,int w=3,int h=4);
int main()

{
cout<<"volume="<<volume(4,6,2)<<"\n";
cout<<"volume="<<volume(4,6)<<"\n";;
cout<<"volume="<<volume(4)<<"\n";;

}
int volume( int l,int w,int h)
{cout<<"l="<<l<<"\n";;
cout<<"w="<<w<<"\n";;
cout<<"h="<<h<<"\n";;
return l*w*h;
}
