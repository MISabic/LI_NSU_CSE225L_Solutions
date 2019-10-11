#include<iostream>

using namespace std;

int main()
{
    int sizeOfRow, sizeOfColumn;

    cout << "Enter the number of rows : " ;
    cin >> sizeOfRow;

    cout << "Enter the number of columns : " ;
    cin >> sizeOfColumn;

    string **ptr = new string* [sizeOfRow];    // declaring a pointer of user specified size which will allocate memory for us

    for(int i=0; i<sizeOfRow; i++)
    {
        ptr[i] = new string [sizeOfColumn];
    }

    // taking user inputs for each array element

    for(int i=0; i<sizeOfRow; i++)
    {
        for(int j=0; j<sizeOfColumn; j++)
        {
            cin >> ptr[i][j];
        }
    }

    // printing the values

    for(int i=0; i<sizeOfRow; i++)
    {
        for(int j=0; j<sizeOfColumn; j++)
        {
            cout << ptr[i][j] << " ";
        }
        cout << endl;
    }

    delete [] ptr;      // deallocating the memory

    return 0;
}

