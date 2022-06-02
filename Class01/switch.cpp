#include <iostream>
using namespace std;

int main()
{
    int day = 2;
    switch (day)
    {
    case 1:
        cout << "Monday" << endl;
        break;

    case 2:
        cout << "Tue" << endl;
        break;

    case 3:
        cout << "Fri" << endl;
        break;

    default:
        cout << "Invalid day!" << endl;
        break;
    }
    cout << "out of switch" << endl;
}