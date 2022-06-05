#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p = &a;

    cout << "Adress of p is: " << p << endl;
    cout << "Adress of p+1 is: " << p+1 << endl;
    cout << "Value of p+1 is: " << *(p+1) << endl;

    // int - 4 bytes
    cout << "Size of integer is: " << sizeof(int) << " bytes" << endl;

    


}