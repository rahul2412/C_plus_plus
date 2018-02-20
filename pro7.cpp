#include<iostream>
using namespace std;
class counter
{
    int count;
public:
    counter()
    {
       count=0;
    }
    void operator++()
    {
        count++;
        cout<<"++operator gives:";
        cout<<count<<endl;
    }
    void operator-()
    {
        count=-count;
        cout<<"-operator gives:";
        cout<<count;
    }

};
int main()
{
    counter c;
    ++c;
    -c;

}

