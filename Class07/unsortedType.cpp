#include "unsortedType.h"

template <class T>
unsortedType<T>::unsortedType()
{
    this->length = 0;
    this->currentPos = -1;
}

template <class T>
void unsortedType<T>::makeEmpty()
{
    this->length = 0;
}

template <class T>
bool unsortedType<T>::isFull()
{
    return this->length == MAX_ITEMS;
}

template <class T>
int unsortedType<T>::lengthIs()
{
    return this->length;
}

template <class T>
void unsortedType<T>::resetList()
{
    this->currentPos = -1;
}

template <class T>
void unsortedType<T>::getNextItem(T &item)
{
    this->currentPos++;
    item = arr[this->currentPos];
}

template <class T>
void unsortedType<T>::retriveItem(T &item, bool &found)
{
    int index = 0;
    found = false;
    for (int i = 0; i < this->length; i++)
    {
        if (item == arr[index])
        {
            found = true;
            item = arr[index];
        }
        else
        {
            index++;
        }
    }
}

template <class T>
void unsortedType<T>::insertItem(T item)
{
    arr[this->length] = item;
    length++;
}

template <class T>
void unsortedType<T>::deleteItem(T item)
{
    int index = 0;
    while (item != arr[index])
    {
        index++;
    }

    arr[index] = arr[length - 1];
    length--;
}
