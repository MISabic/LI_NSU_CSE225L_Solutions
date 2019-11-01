#include <iostream>
#include <string>
#include "unsortedtype.h"
#include "unsortedtype.cpp"
#include "studentInfo.h"

using namespace std;

template<class T>
void printList(UnsortedType<T> &temp_ut)
{
    T value;
    int len = temp_ut.LengthIs();

    for(int i=0; i<len; i++){
        temp_ut.GetNextItem(value);
        cout << value << endl;
    }
    cout << endl;

    temp_ut.ResetList();
}

template<class T>
void checkItemExistsOrNot(UnsortedType<T> &temp_ut, T &item)
{
    bool check;

    temp_ut.RetrieveItem(item, check);

    if(check == true)
        cout << "Item is found" << endl;
    else
        cout << "Item is not found" << endl;
}

int main()
{
    /* Create a list of integers */
    UnsortedType<int> ut;

    /* Insert four items */
    int n;
    for(int i=0; i<4; i++){
        cin >> n;
        ut.InsertItem(n);
    }

    /* Print the list */
    printList(ut);

    /* Print the length of the list */
    cout << ut.LengthIs() <<endl;

    /* Insert one item */
    cin >> n;
    ut.InsertItem(n);

    /* Print the list */
    printList(ut);

    /* Retrieve 4 and print whether found or not */
    int value = 4;
    checkItemExistsOrNot(ut, value);

    /* Retrieve 5 and print whether found or not */
    value = 5;
    checkItemExistsOrNot(ut, value);

    /* Retrieve 9 and print whether found or not */
    value = 9;
    checkItemExistsOrNot(ut, value);

    /* Retrieve 10 and print whether found or not */
    value = 10;
    checkItemExistsOrNot(ut, value);

    /* Print if the list is full or not */
    if(ut.IsFull() == true)
        cout << "List is full" << endl;
    else
        cout << "List is not full" << endl;

    /* Delete 5 */
    ut.DeleteItem(5);

    /* Print if the list is full or not */
    if(ut.IsFull() == true)
        cout << "List is full" << endl;
    else
        cout << "List is not full" << endl;

    /* Delete 1 */
    ut.DeleteItem(1);

    /* Print the list */
    printList(ut);

    /* Delete 6 */
    ut.DeleteItem(6);

    /* Print the list */
    printList(ut);





    /* Create a list of objects of class studentInfo. */
    UnsortedType<studentInfo> studentList;

    /* Insert 5 student records */
    studentInfo student;

    student = studentInfo();

    for(int i=0; i<5; i++){
        cin >> student;
        studentList.InsertItem(student);
    }

    /* Delete the record with ID 15467 */
    student = studentInfo(15467);

    studentList.DeleteItem(student);

    /* Retrieve the record with ID 13569 */
    student = studentInfo(13569);

    checkItemExistsOrNot(studentList, student);

    cout << student << endl << endl;

    /* Print whether found or not along with the entire record */
    student = studentInfo();

    printList(studentList);

    return 0;
}
