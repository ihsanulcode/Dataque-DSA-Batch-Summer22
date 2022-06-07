#include <iostream>
using namespace std;

int main()
{
    // pointers - variable that store address of another variable
    // int - 4 bytes
    // char - 1 bytes
    // float - 4 bytes

    int a = 5;   // 200h
    int *p = &a; // referencing //201h

    cout << *p << endl; // dereferencing 5
}