#include "dynarr.h"
#include <iostream>
using namespace std;

template <class ItemType>
dynarr<ItemType>::dynarr()
{
    this->arr = NULL;
    this->size = 0;
}

template <class ItemType>
dynarr<ItemType>::dynarr(int size)
{
    this->arr = new ItemType[size];
    this->size = size;
}

template <class ItemType>
dynarr<ItemType>::~dynarr()
{
    delete[] arr;
}

template <class ItemType>
void dynarr<ItemType>::setValue(int index, ItemType value)
{
    arr[index] = value;
}

template <class ItemType>
ItemType dynarr<ItemType>::getValue(int index)
{
    return arr[index];
}
