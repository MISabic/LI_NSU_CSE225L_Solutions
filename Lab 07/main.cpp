#include <iostream>
#include "quetype.h"
#include "quetype.cpp"

using namespace std;

void dequeItems(QueType<int> &que)
{
    int n;
    if(que.IsEmpty())
        cout << "Queue Underflow" << endl;
    else
        que.Dequeue(n);
}

void PrintVal(QueType<int> &que)
{
    QueType<int> que2(5);
    while(!que.IsEmpty()){
        int value;
        que.Dequeue(value);

        cout << value << ' ';
        que2.Enqueue(value);
    }
    cout << endl;
    que = que2;
}

int main()
{
    // Create a queue of integers of size 5
    QueType<int> que(5);

    // Print if the queue is empty or not
    if(que.IsEmpty())
        cout << "Queue is Empty" << endl;
    else
        cout << "Queue is not Empty" << endl;

    // Enqueue four items
    for(int i=0; i<4; i++) {
        int n;
        cin >> n;
        if(!que.IsFull())
            que.Enqueue(n);
        else
            cout << "Queue Overflow" << endl;
    }

    // Print if the queue is empty or not
    if(que.IsEmpty())
        cout << "Queue is Empty" << endl;
    else
        cout << "Queue is not Empty" << endl;

    // Print if the queue is full or not
    if(que.IsFull())
        cout << "Queue is Full" << endl;
    else
        cout << "Queue is not Full" << endl;

    // Enqueue another item
    int n;
    cin >> n;
    if(!que.IsFull())
        que.Enqueue(n);
    else
        cout << "Queue Overflow" << endl;

    // Print the values in the queue (in the order the values are given as input)
    PrintVal(que);

    // Print if the queue is full or not
    if(que.IsFull())
        cout << "Queue is Full" << endl;
    else
        cout << "Queue is not Full" << endl;

    // Enqueue another item
    cin >> n;
    if(!que.IsFull())
        que.Enqueue(n);
    else
        cout << "Queue Overflow" << endl;

    // Dequeue two items
    dequeItems(que);
    dequeItems(que);

    // Print the values in the queue (in the order the values are given as input)
    PrintVal(que);

    // Dequeue three items
    dequeItems(que);
    dequeItems(que);
    dequeItems(que);

    // Print if the queue is empty or not
    if(que.IsEmpty())
        cout << "Queue is Empty" << endl;
    else
        cout << "Queue is not Empty" << endl;

    // Dequeue an item
    dequeItems(que);




    /** Take an integer n from the user as input and use a queue to print
        binary values of each integer from 1 to n. Here is how it can be done.
    **/

    int upto;
    cin >> upto;

    // Create an empty queue
    QueType<string> queNew;

    // Enqueue the first binary number “1” to the queue.
    queNew.Enqueue("1");

    // Now run a loop for generating and printing n binary numbers.
    for(int i=1; i<=upto; i++){

        // Dequeue and print the value.
        string value;
        queNew.Dequeue(value);
        cout << value << endl;

        // Append “0” at the dequeued value and enqueue it.
        queNew.Enqueue(value + "0");

        // Append “1” at the dequeued value and enqueue it.
        queNew.Enqueue(value + "1");
    }

    return 0;
}
