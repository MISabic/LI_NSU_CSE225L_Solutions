#include<iostream>

using namespace std;

int main()
{
    int sizeOfArray;

    cout << "Enter the size of an array : " ;
    cin >> sizeOfArray;     // user input for array size

    int *ptr = new int[sizeOfArray];    // declaring a pointer of user specified size which will allocate memory for us

    // taking user inputs for each array element

    for(int i=0; i<sizeOfArray; i++)
    {
        cin >> ptr[i];
    }

    // printing the values

    for(int i=0; i<sizeOfArray; i++)
    {
        cout << ptr[i] << endl;
    }

    delete [] ptr;      // deallocating the memory

    return 0;
}
