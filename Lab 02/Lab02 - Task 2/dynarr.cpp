#include "dynarr.h"
#include <iostream>

using namespace std;

dynArr::dynArr()
{
    data = NULL;
    size = 0;
}

dynArr::dynArr(int s)
{
    data = new int[s];
    size = s;
}

dynArr::~dynArr()
{
    delete [] data;
}

void dynArr::allocate(int s)
{
    delete [] data; // memory should not be leaked; so, first we have to delete the currently allocated memory
    data = new int[s];  // then we will reallocate the memory with the new value of 's'
    size = s;   // then we have to store the value of 's' in 'size'
}

int dynArr::getValue(int index)
{
    return data[index];
}

void dynArr::setValue(int index, int value)
{
    data[index] = value;
}

void dynArr::print()
{
    for(int i=0; i<size; i++)
    {
        cout << data[i] << endl;
    }
}
