#include <iostream>
#include "dynarr.h"
#include "dynarr.cpp"

using namespace std;

int main()
{
    dynArr <char> dArray(5);

    for(int i=0; i<5; i++)
    {
        char n;
        cin >> n;

        dArray.setValue(i, n);
    }

    dArray.print();

    return 0;
}
