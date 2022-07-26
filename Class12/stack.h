#include <iostream>
using namespace std;

class EmptyStack
{
};

template <typename T>
class node
{
public:
    T data;
    node *next;

    node(T data)
    {
        this->data = data;
        this->next = NULL;
    }
};

template <typename T>
class Stack
{
private:
    node<T> *top;

public:
    Stack();
    ~Stack();
    bool IsEmpty();
    void Push(T);
    void Pop();
    T Top();
    void Print();
};