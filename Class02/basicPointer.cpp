#include <iostream>
using namespace std;

int main()
{
    int x = 5;
    int *p = &x; // referencing

    cout << "x: " << x << endl;
    cout << "Address of x: " << &x << endl; // address of x

    cout << "Value of p: " << p << endl; // address of x
    cout << "Address of p: " << &p << endl;
    cout << "*p: " << *p << endl; // dereferencing

    *p = 10;
    cout << "X is: " << x << endl;
}