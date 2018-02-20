#include<iostream>
using namespace std;
class idgenerate
{ static int id;
public:
 static int generate()
 { cout<<"next-id"<<id++;
 }
 };
 int idgenerate::id=1;
 main()
 {
 for(int i=1;i<=5;i++)
 idgenerate::generate();}
