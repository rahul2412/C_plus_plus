#include<iostream>
using namespace std;
#include<vector>
main()
{ vector<int>vect;
int num;
cout<<"enter elements of vector";
for(int i=0;i<5;i++)
{cin>>num;
vect.push_back(num);}
cout<<"elements of vector= ";
vector<int>::iterator itr;
itr=vect.begin();
vect.insert(itr+4,1,25);
vect.erase(vect.begin()+3);cout<<"After editing vect= ";
for(int i=0;i<vect.size();i++)
    {
        cout<<vect[i]<<" ";
    }
}
