#include <iostream>
using namespace std;

int main()
{
    // int arr[5] = {1, 2, 3, 4, 5};

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << arr[i] << endl;
    // }

    int arr[5] = {1, 2, 3, 4, 5};
    int *p = arr; //&arr[0]

    for (int i = 0; i < 5; i++)
    {
        cout << "Address of arr[" << i << "]: " << arr + i << endl;  // P+i
        cout << "Value of arr[" << i << "]: " << *(arr + i) << endl; //*(p+i)
    }
}