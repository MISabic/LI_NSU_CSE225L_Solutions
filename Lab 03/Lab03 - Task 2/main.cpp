#include <iostream>
#include "Complex.h"

using namespace std;

int main()
{
    Complex c1(4, 5);
    Complex c2(5, 6);

    Complex c3 = c1 + c2;

    c3.Print();

    c3 = c1 * c2;

    c3.Print();

    return 0;
}
