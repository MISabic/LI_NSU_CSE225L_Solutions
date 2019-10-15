#include "dynarr.h"
#include <iostream>

using namespace std;

// to access the method under a class -> class_name::method_name

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
