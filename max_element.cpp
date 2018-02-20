#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
main()
{ vector<int>v{3,1,-14,9,5,1};
vector<int>::iterator result;
result=max_element(v.begin(),v.end());
cout<<"Max_value is"<<result<<endl;
}
