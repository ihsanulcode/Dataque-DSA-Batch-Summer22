#include <iostream>
#include "linkedList.cpp"
using namespace std;

int main()
{
    linkedList<string> list;
    list.insertAtTail("Jon");
    list.insertAtTail("Snow");
    list.insertAtTail("John");
    list.insertAtTail("Doe");
    list.insertAtTail("Jonn");
    list.insertAtTail("Kabir");

    list.print();

    string key = "Snow";
    if (list.Search(key))
        cout << "Found!" << endl;
    else
        cout << "Not Found!" << endl;

    list.reverse();
    list.print();

    list.insertAtHead("Ihsanul");
    list.print();

    list.~linkedList();
    list.print();
}