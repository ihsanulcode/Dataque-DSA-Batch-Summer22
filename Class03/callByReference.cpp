#include <iostream>
using namespace std;

// call by value
// void increment(int a)
// {
//     cout << "Address of a in increment block: " << &a << endl;
//     a = a + 1;
// }

// int main()
// {
//     int a = 1;
//     cout << "Address of a in main block: " << &a << endl;
//     // cout << "before a: " << a << endl;
//     increment(a);
//     // cout << "after a: " << a << endl;
// }

// call by reference
void increment(int *a)
{
    // cout << "Address of a in increment block: " << a << endl;
    *a = *a + 1;
}

int main()
{
    int a = 1;
    // cout << "Address of a in main block: " << &a << endl;
    cout << "before a: " << a << endl;
    increment(&a);
    cout << "after a: " << a << endl;
}