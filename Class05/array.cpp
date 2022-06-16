#include <iostream>
using namespace std;

int main()
{
    int arr[5]; // stack memory

    for (int i = 0; i < 5; i++)
    {
        arr[i] = i;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
}