#include<iostream>
#define max 10
using namespace std;

template <class type>
void swapping(type &a,type &b)
{
	type temp;
	temp=a;
	a=b;
	b=temp;
}
template<class type>
void print(type a[]){
	for(int i=0;i<max;i++)
	cout<<a[i]<<"";
}
template<class type>
void read(type a[])
{
	for(int i=0;i<max;i++)
	cin>>a[i];
}
template<class type>
void sort(type a[])
{
	for(int i=0;i<max;i++)
	{
		for(int j=0;j<max-i;j++)
		{
			if(a[j]>a[j+1])
			swap(a[j],a[j+1]);
		}
	}
}
main(){
	char array[max];
	cout<<"enter char array";
	read(array);
	cout<<"sorted array is";
	sort(array);
	print(array);
	int array2[max];
	cout<<"enter int array";
	read(array2);
	cout<<"sorted array is";
	sort(array2);
	print(array2);
}
