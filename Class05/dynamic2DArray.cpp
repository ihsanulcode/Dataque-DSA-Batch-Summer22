#include <iostream>
using namespace std;

int main()
{

    // allocating a int array (row)
    int **ptr = new int *[3]; // row

    for (int i = 0; i < 3; i++)
    {
        ptr[i] = new int[3]; // col
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            ptr[i][j] = i;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << ptr[i][j] << " ";
        }
        cout << endl;
    }

    // deallocate
    for (int i = 0; i < 3; i++)
    {
        delete[] ptr[i];
    }
    delete[] ptr;
}