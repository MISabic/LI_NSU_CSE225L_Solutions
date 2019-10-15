#include <iostream>
#include "dynarr.h"

using namespace std;

int main()
{
    dynArr dArray1;
    dynArr dArray2(5);

    for(int i=0; i<5; i++)
    {
        int n;
        cin >> n;

        dArray2.setValue(i, n);
    }

    dArray2.print();

    return 0;
}
