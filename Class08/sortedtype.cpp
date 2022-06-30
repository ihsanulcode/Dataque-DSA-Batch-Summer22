#include "sortedtype.h"

sortedtype::sortedtype()
{
    this->length = 0;
    this->currentPos = -1;
}

void sortedtype::makeEmpty()
{
    this->length = 0;
}

bool sortedtype::isFull()
{
    return this->length == MAX_ITEMS;
}

int sortedtype::lengthIs()
{
    return this->length;
}

void sortedtype::resetList()
{
    this->currentPos = -1;
}

void sortedtype::getNextItem(int &item)
{
    this->currentPos++;
    item = arr[this->currentPos];
}

void sortedtype::insertItem(int item)
{
    int index = 0;
    while (index < this->length)
    {
        if (item > arr[index])
        {
            index++;
        }
        else if (item == arr[index])
        {
            index++;
        }
        else if (item < arr[index])
        {
            break;
        }
    }

    for (int i = this->length; i > index; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[index] = item;
    this->length++;
}

void sortedtype::deleteItem(int item)
{
    int index = 0;
    while (item != arr[index])
        index++;

    for (int i = index + 1; i < this->length; i++)
    {
        arr[i - 1] = arr[i];
    }

    this->length--;
}

void sortedtype::retriveItem(int &item, bool &found)
{
    found = false;

    // binary search
    int start = 0;
    int end = this->length - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] == item)
        {
            found = true;
            item = arr[mid];
            break;
        }
        else if (arr[mid] > item)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
}