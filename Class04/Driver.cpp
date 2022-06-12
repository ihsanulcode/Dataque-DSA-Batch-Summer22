#include <iostream>
#include "Box.cpp"
using namespace std;

int main()
{
    Box b1(3.5, 5.5, 6.5);
    double v1 = b1.volume();
    cout << "Volume1: " << v1 << endl;

    Box b2(5.5, 10.5, 16.5);
    double v2 = b2.volume();
    cout << "Volume2: " << v2 << endl;

    Box b3;
    b3.setHeight(4.5);
    b3.setDepth(3.5);
    b3.setWidth(6.7);
    cout << "Volume3: " << b3.volume() << endl;

    Box b4;
    cout << "Volume4: " << b4.volume() << endl;
}