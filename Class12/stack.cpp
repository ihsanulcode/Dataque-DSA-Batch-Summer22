#include "stack.h"
#include <iostream>
using namespace std;

template <typename T>
Stack<T>::Stack()
{
    this->top = NULL;
}

template <typename T>
Stack<T>::~Stack()
{
    node<T> *temp;
    while(this->top!=NULL){
        temp = this->top;
        this->top = this->top->next;
        delete temp;
    }
}

template <typename T>
bool Stack<T>::IsEmpty()
{
    return this->top == NULL;
}

template <typename T>
void Stack<T>::Push(T data)
{
    node<T> *newNode = new node<T>(data);
    if (this->top == NULL)
    {
        this->top = newNode;
        return;
    }
    else
    {
        newNode->next = this->top;
        this->top = newNode;
    }
}

template <typename T>
void Stack<T>::Pop()
{
    if (IsEmpty())
    {
        throw EmptyStack();
    }
    else
    {
        node<T> *temp = this->top;
        this->top = this->top->next;
        delete temp;
    }
}

template <typename T>
T Stack<T>::Top()
{
    if (IsEmpty())
    {
        throw EmptyStack();
    }
    else
    {
        return this->top->data;
    }
}

template <typename T>
void Stack<T>::Print()
{
    if (IsEmpty())
    {
        throw EmptyStack();
    }
    else
    {
        node<T> *temp = this->top;
        while (temp != NULL)
        {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }
}