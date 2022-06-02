#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int time = 20;
    // if (time < 18)
    // {
    //     cout << "Good morning!" << endl;
    // }
    // else
    // {
    //     cout << "Good evening!" << endl;
    // }
    // assignment operator =

    string msg = (time < 18) ? "Good morning!" : "Good evening!";
    cout << msg;

    // string variable = (condition)? true:false;
}