#include "dynarr.h"
#include <iostream>

using namespace std;

dynArr::dynArr()
{
    data = NULL;
    row = 0, column = 0;
}

dynArr::dynArr(int row, int column)
{
    data = new int*[row];
    for(int i=0; i<row; i++)
    {
        data[i] = new int[column];
    }
    this->row = row;
    this->column = column;
}

dynArr::~dynArr()
{
    delete [] data;
}

void dynArr::allocate(int row, int column)
{
    delete [] data;
    data = new int*[row];
    for(int i=0; i<row; i++)
    {
        data[i] = new int[column];
    }
    this->row = row;
    this->column = column;
}

int dynArr::getValue(int rowIndex, int columnIndex)
{
    return data[rowIndex][columnIndex];
}

void dynArr::setValue(int rowIndex, int columnIndex, int value)
{
    data[rowIndex][columnIndex] = value;
}

void dynArr::print()
{
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        {
            cout << data[i][j]<<" ";
        }
        cout << endl;
    }
}
