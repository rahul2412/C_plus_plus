#include <stdlib.h>
#include<iostream>
using namespace std;
float fun(float);
int main()
{
    int i,c;
    float x,a,b,d,e;
    cin>>a>>b;

    cout<<"Now enter the no of iterations";
    cin>>c;
    if(c==1)
    {
        x=(float)(a*fun(b)-b*fun(a))/(fun(b)-fun(a));
        cout<<"x1= "<<x;
        exit(0);
    }
    for(i=0;i<c;i++)
    {
        x=(float)(a*fun(b)-b*fun(a))/(fun(b)-fun(a));
        cout<<"The iteration no "<<i+1<<"="<<x<<endl;
        if((fun(a)*fun(x))<0.0)
            b=x;
        else
            a=x;
    }
}
float fun(float a)
{
    return(a*a*a-a-4);
}
