#include <iostream>
#include "dynarr.h"

using namespace std;

int main()
{
    int rowNumber, columnNumber, value;

    cout << "Enter number of rows :: ";
    cin >> rowNumber;

    cout << "Enter number of columns :: ";
    cin >> columnNumber;


    dynArr dArray(rowNumber, columnNumber);

    for(int i=0; i<rowNumber; i++)
    {
        for(int j=0; j<columnNumber; j++)
        {
            cin >> value;
            dArray.setValue(i, j, value);
        }
    }

    dArray.print();

    return 0;
}
