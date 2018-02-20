#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> first;
    vector<int> second;
    vector<int> third;
    first.assign(7,100);//assigns 100 to 7 values
    vector<int>::iterator itr;
    itr=first.begin() +1;
    second.assign(itr,first.end()-1);

int array[]={4,5,6};
third.assign(array,array +3);
cout<<"size of first v="<<first.size();
cout<<"size of second v="<<second.size();
cout<<"size of third v="<<third.size();
}
