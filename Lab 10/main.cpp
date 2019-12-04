#include <iostream>
#include "unsortedtype.h"
#include "unsortedtype.cpp"

using namespace std;

int main()
{
    UnsortedType<int> listOne, listTwo, mergedList;

    // Taking input
    int n, value;
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> value;
        listOne.InsertItem(value);
    }

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> value;
        listTwo.InsertItem(value);
    }

    // Merging two lists

    int currentValueOfListOne, currentValueOfListTwo, indexOfListOne = listOne.LengthIs(), indexOfListTwo = listTwo.LengthIs();

    listOne.GetNextItem(currentValueOfListOne);
    listTwo.GetNextItem(currentValueOfListTwo);

    while(indexOfListOne > 0 && indexOfListTwo > 0){

        if(currentValueOfListOne > currentValueOfListTwo){

            mergedList.InsertItem(currentValueOfListOne);
            --indexOfListOne;
            if(indexOfListOne > 0) listOne.GetNextItem(currentValueOfListOne);

        }
        else if(currentValueOfListTwo > currentValueOfListOne){

            mergedList.InsertItem(currentValueOfListTwo);
            --indexOfListTwo;
            if(indexOfListTwo > 0) listTwo.GetNextItem(currentValueOfListTwo);

        }
        else{

            mergedList.InsertItem(currentValueOfListOne);
            mergedList.InsertItem(currentValueOfListTwo);
            --indexOfListOne;
            --indexOfListTwo;
            if(indexOfListOne > 0) listOne.GetNextItem(currentValueOfListOne);
            if(indexOfListTwo > 0) listTwo.GetNextItem(currentValueOfListTwo);

        }

    }

    while(indexOfListOne > 0){
        mergedList.InsertItem(currentValueOfListOne);
        --indexOfListOne;
        if(indexOfListOne > 0) listOne.GetNextItem(currentValueOfListOne);
    }

    while(indexOfListTwo > 0){
        mergedList.InsertItem(currentValueOfListTwo);
        --indexOfListTwo;
        if(indexOfListTwo > 0) listTwo.GetNextItem(currentValueOfListTwo);
    }

    int currentValueOfMergedList, indexOfMergedList = mergedList.LengthIs()-1;

    while(indexOfMergedList >= 0){

        mergedList.GetNextItem(currentValueOfMergedList);
        cout << currentValueOfMergedList << ' ';
        --indexOfMergedList;

    }

    cout << endl;

    return 0;
}
