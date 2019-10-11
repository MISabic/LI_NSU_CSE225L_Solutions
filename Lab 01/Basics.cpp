#include<iostream>

using namespace std;

int main()
{
    // to take input use cin
    int n;
    cin >> n;

    // to print something use cout
    // endl -> end line [similam to '\n']
    n = 225;
    cout << "Hello World" << endl;

    // you can also write
    cout << "Hello World\n" ;

    // for different types of data
    cout << "CSE " << n <<endl;

    // new datatype
    string str = "CSE 225";

    // for dynamic memory allocation
    int *variable = new int;
    int *oneDArray = new int [5];
    int **twoDArray = new int* [5];
    int ***threeDArray = new int** [5];

    // To put a data
    *variable = 5;

    // memory address
    cout << "Memory address indicated by \"variable\": " << variable << endl;

    // data located in that address. the * operator is known as "dereferencing operator"
    cout << *variable << endl;

    // two ways to access an array element
    oneDArray[2] = 6;
    cout << oneDArray[2] << endl;

    *(oneDArray + 2) = 7;
    cout << oneDArray[2] << endl;

    // for memory deallocation

    delete variable;
    delete [] oneDArray;
    delete [] twoDArray;
    delete [] threeDArray;

    return 0;
}
