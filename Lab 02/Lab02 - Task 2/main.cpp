#include <iostream>
#include "dynarr.h"

using namespace std;

int main()
{
    dynArr dArray(5);
    dArray.allocate(10);   // allocating memory with new size

    for(int i=0; i<10; i++)
    {
        int n;
        cin >> n;

        dArray.setValue(i, n);
    }

    dArray.print();

    return 0;
}
