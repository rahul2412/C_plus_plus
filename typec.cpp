#include<iostream>
using namespace std;
class rectangle;
class square{
int side;
public:
    square(int s){
    side=s;}
    int get_side(){
    return side;}
    };
    class rectangle{
    int length,breadth;
public:
    rectangle(int l,int b)
    {
        length=l;
        breadth=b;
    }
    rectangle(square s)
    {
        int sqr=s.get_side();
        length=breadth=sqr;
    }
    void show() {
    cout<<"length="<<length;
    cout<<"breadth="<<breadth;}};
    main()
    {
        rectangle R(50,100);
        square S(50);
        R=S;
        R.show();
    }


