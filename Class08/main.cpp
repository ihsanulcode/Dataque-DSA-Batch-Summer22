#include <iostream>
#include "sortedtype.cpp"
using namespace std;

int main()
{
    sortedtype list;
    list.insertItem(1);
    list.insertItem(4);
    list.insertItem(3);
    list.insertItem(2);

    for (int i = 1; i <= list.lengthIs(); i++)
    {
        int n;
        list.getNextItem(n);
        cout << n << endl;
    }

    cout << endl;
    list.deleteItem(3);

    list.resetList();
    for (int i = 1; i <= list.lengthIs(); i++)
    {
        int n;
        list.getNextItem(n);
        cout << n << endl;
    }

    cout << endl;

    int key = 5;
    bool found;
    list.retriveItem(key, found);

    if (found)
        cout << "Found! " << key << endl;
    else
        cout << "Not Found! " << key << endl;
}