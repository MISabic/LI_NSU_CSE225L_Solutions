#include<iostream>

using namespace std;

int main()
{
    int sizeOfRow;

    cout << "Enter the number of rows : " ;
    cin >> sizeOfRow;

    int **ptr = new int* [sizeOfRow];    // declaring a pointer of user specified size which will allocate memory for us

    int *sizeOfColumn = new int [sizeOfRow];

    /**
        As rows are not of the same size, we have to keep the data in an array. So that we can use it later.
        Due to that, we declared a new array "sizeOfColumn"
    **/

    for(int i=0; i<sizeOfRow; i++)
    {
        cout << "Enter the number of column for row #" << (i+1) <<" : ";
        cin >> sizeOfColumn[i];

        ptr[i] = new int [sizeOfColumn[i]];
    }

    // taking user inputs for each array element

    for(int i=0; i<sizeOfRow; i++)
    {
        for(int j=0; j<sizeOfColumn[i]; j++)
        {
            cin >> ptr[i][j];
        }
    }

    // printing the values

    for(int i=0; i<sizeOfRow; i++)
    {
        for(int j=0; j<sizeOfColumn[i]; j++)
        {
            cout << ptr[i][j] << " ";
        }
        cout << endl;
    }

    delete [] ptr;      // deallocating the memory

    return 0;
}


/**
    Sample Data
    3 4 5 6
    2 1
    7 8 9
**/
