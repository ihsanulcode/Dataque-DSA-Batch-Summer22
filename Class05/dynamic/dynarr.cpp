#include "dynarr.h"
#include <iostream>
using namespace std;

dynarr::dynarr()
{
    this->arr = NULL;
    this->size = 0;
}

dynarr::dynarr(int size)
{
    this->arr = new int[size];
    this->size = size;
}

dynarr::~dynarr()
{
    delete[] arr;
}

void dynarr::setValue(int index, int value)
{
    arr[index] = value;
}

int dynarr::getValue(int index)
{
    return arr[index];
}