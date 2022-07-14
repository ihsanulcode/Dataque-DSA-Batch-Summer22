#include "stacktype.cpp"
#include <iostream>
using namespace std;

template <class T>
void printStack(stacktype<T> s)
{
    stacktype<T> temp;
    while (!s.IsEmpty())
    {
        temp.Push(s.Top());
        cout << s.Top() << endl;
        s.Pop();
    }

    while (!temp.IsEmpty())
    {
        s.Push(temp.Top());
        temp.Pop();
    }
}

int main()
{
    stacktype<int> stack;
    stack.Push(1);
    stack.Push(2);
    stack.Push(3);

    //printStack(stack);
    
    stack.Push(4);    
    stack.Push(5);

    printStack(stack);


}