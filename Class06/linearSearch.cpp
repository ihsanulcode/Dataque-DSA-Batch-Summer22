#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (key == arr[i])
            return i;
    }
    return -1;
}

int main()
{
    int arr[] = {8, 10, 12, 21, 27, 34, 42, 50};
    int key = 60;
    int size = sizeof(arr) / sizeof(arr[0]); //32/4 = 8

    if (linearSearch(arr, size, key) > -1)
    {
        cout << "Found!" << endl;
    }
    else
    {
        cout << "Not Found!" << endl;
    }
}