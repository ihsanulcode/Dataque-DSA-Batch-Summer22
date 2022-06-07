#include <iostream>
using namespace std;

struct point
{
    float x;
    float y;
};

int main()
{
    point a;
    point b;
    point mid;

    // point
    point *p1 = &a;
    point *p2 = &b;
    point *m = &mid;

    // getting point
    cout << "Point P1:" << endl;
    cout << "x1: ";
    cin >> (*p1).x;
    cout << "y1: ";
    cin >> (*p1).y;
    cout << "\nPoint P2:" << endl;
    cout << "x1: ";
    cin >> (*p2).x;
    cout << "y1: ";
    cin >> (*p2).y;

    // calculation midpoint
    (*m).x = ((*p1).x + (*p2).x) / 2.0;
    (*m).y = ((*p1).y + (*p2).y) / 2.0;

    // output
    cout << "\nMidx : " << (*m).x << endl;
    cout << "Midy : " << (*m).y << endl;
}
