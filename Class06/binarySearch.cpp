#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {8, 10, 12, 21, 27, 34, 42, 50};
    int key = 60;
    int size = sizeof(arr) / sizeof(arr[0]); // 32/4 = 8

    cout << binarySearch(arr, size, key) << endl;
}