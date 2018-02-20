#include <iostream>
using namespace std;
main()
{
int *ptr;
char *cptr;
double *dptr;
float *fptr;
cout<<"size of integer ptr is"<<sizeof(ptr);
cout<<"size of char ptr is"<<sizeof(cptr);
cout<<"size of double ptr is"<<sizeof(dptr);
cout<<"size of float ptr is"<<sizeof(fptr);
cout<<"size of content of int ptr is"<<sizeof(*ptr);
cout<<"size of content of char ptr is"<<sizeof(*cptr);
cout<<"size of content of double ptr is"<<sizeof(*dptr);
cout<<"size of content of float ptr is"<<sizeof(*fptr);
}
