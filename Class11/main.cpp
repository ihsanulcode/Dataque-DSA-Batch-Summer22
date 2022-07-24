#include "queue.cpp"
#include <iostream>
using namespace std;

template <class T>
void Print(queue<T> q)
{
    queue<T> temp;

    while (!q.isEmpty())
    {
        int data = q.front();
        cout << data << " ";
        q.dequeue();
        temp.enqueue(data);
    }
    cout << endl;
    q = temp;
}

int main()
{
    queue<int> q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6);

    Print(q);

    if(q.isEmpty()) cout << "Empty Queue" << endl;
    else cout << "Not Empty" << endl;
    return 0;
}