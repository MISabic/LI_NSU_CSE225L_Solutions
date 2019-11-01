#include <iostream>
#include <string>
#include "sortedtype.h"
#include "sortedtype.cpp"
#include "timeStamp.h"

using namespace std;

template<class T>
void printList(SortedType<T> &st)
{
    T value;
    int len = st.LengthIs();

    for(int i=0; i<len; i++){
        st.GetNextItem(value);
        cout << value << endl;
    }
    cout << endl;

    st.ResetList();
}

template<class T>
void checkItemExistsOrNot(SortedType<T> &st, T &item)
{
    bool check;

    st.RetrieveItem(item, check);

    if(check == true)
        cout << "Item is found" << endl;
    else
        cout << "Item is not found" << endl;
}

int main()
{
    /* Create a list of integers */
    SortedType<int> st;

    /* Print length of the list */
    cout << st.LengthIs() << endl;

    /* Insert five items */
    int n;
    for(int i=0; i<5; i++){
        cin >> n;
        st.InsertItem(n);
    }

    /* Print the list */
    printList(st);

    /* Retrieve 6 and print whether found */
    int value = 6;
    checkItemExistsOrNot(st, value);

    /* Retrieve 5 and print whether found */
    value = 5;
    checkItemExistsOrNot(st, value);

    /* Print if the list is full or not */
    if(st.IsFull() == true)
        cout << "List is full" << endl;
    else
        cout << "List is not full" << endl;

    /* Delete 1 */
    st.DeleteItem(1);

    /* Print the list */
    printList(st);

    /* Print if the list is full or not */
    if(st.IsFull() == true)
        cout << "List is full" << endl;
    else
        cout << "List is not full" << endl;




    /* Create a list of objects of class timeStamp */
    SortedType<timeStamp> time;

    /* Insert 5 time values in the format ssmmhh */
    timeStamp ts;

    ts = timeStamp();

    for(int i=0; i<5; i++){
        cin >> ts;
        time.InsertItem(ts);
    }

    /* Delete the timestamp 25 36 17 */
    ts = timeStamp("25", "36", "17");

    time.DeleteItem(ts);

    /* Print the list */
    printList(time);

    return 0;
}
