#include<iostream>
using namespace std;
template<class T>
void show(T x)
{
    cout<<"x="<<x<<"\n";

}
main()
{
    int i;
    cin>>i;
    show(i);
    float f;
    cin>>f;
    show(f);
    char d;
    cin>>d;
    show(d);
}
