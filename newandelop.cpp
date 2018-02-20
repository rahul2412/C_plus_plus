#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter total number of students: ";
    cin >> n;
    float* ptr;


    ptr = new float[n];
float sum=0.0;
    cout << "Enter marks of students." << endl;
    for (int i = 0; i < n; ++i)
    {
        cout << "Student" << i + 1;
        cin >> *(ptr + i);
        sum=sum+*(ptr + i);
    }

    cout << "\nDisplaying marks of students." << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Student" << i + 1 << "marks" << *(ptr + i) << endl;

    }
cout<<sum;
    // ptr memory is released
    delete [] ptr;

    return 0;
}
