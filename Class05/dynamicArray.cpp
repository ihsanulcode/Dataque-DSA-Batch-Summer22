#include <iostream>
using namespace std;

int main()
{
    // declaring a dynamic array
    int *arr = new int[5]; // right part is returning only address

    for (int i = 0; i < 5; i++)
    {
        int n;
        cin >> n;
        arr[i] = n;
    }

    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }

    delete arr; // deallocate
}