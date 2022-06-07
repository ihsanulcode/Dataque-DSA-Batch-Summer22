#include <iostream>
using namespace std;

int main()
{
    // Task: Take n elements from user and add them using pointer. Print the sum.
    int size;
    cout << "Enter array size: ";
    cin >> size; // getting size from user

    // declaring array
    int arr[size];
    int *p = arr; // declaring pointer

    // getting array elements from user
    cout << "Enter array elements: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "arr[" << i << "]: ";
        cin >> *(arr + i);
    }

    int sum = 0;
    cout << "Elements: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "arr[" << i << "]: " << *(arr + i) << endl;
        sum += *(arr + i);
    }

    cout << "\nSummation: " << sum << endl;
}