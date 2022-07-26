#include "stack.cpp"
#include <iostream>
using namespace std;

int main()
{
    Stack<int> s;
    s.Push(1);
    s.Push(2);
    s.Push(3);
    s.Print();

    cout << endl;
    s.Pop();
    s.Pop();
    s.Pop();
    s.Print();
    return 0;
}