#include <iostream>
#include "dynarr.cpp"
using namespace std;

int main()
{
    int size;
    cout << "Enter array size: ";
    cin >> size;

    dynarr arr(size);

    cout << "\nEnter array elements:" << endl;
    for (int i = 0; i < size; i++)
    {
        int n;
        cin >> n;
        arr.setValue(i, n);
    }

    int sum = 0;
    cout << "\nArray:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr.getValue(i) << endl;
        sum += arr.getValue(i);
    }

    cout << "\nSum: " << sum << endl;
    cout << "Average: " << (sum / (double)size) << endl;
    arr.~dynarr();
}