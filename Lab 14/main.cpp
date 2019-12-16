#include <iostream>
#include "heaptype.h"
#include "pqtype.h"
#include "pqtype.cpp"

using namespace std;

int main()
{
    // Create a PQType object with size 15
    PQType<int> pq(15);

    // Print if the queue is empty or not
    if(pq.IsEmpty())
        cout << "Queue is empty" << endl;
    else
        cout << "Queue is not empty" << endl;

    // Insert ten items, in the order they appear
    int value;
    for(int i=0; i<10; i++){
        cin >> value;
        pq.Enqueue(value);
    }

    // Print if the queue is empty or not
    if(pq.IsEmpty())
        cout << "Queue is empty" << endl;
    else
        cout << "Queue is not empty" << endl;

    // Dequeue one element and print the dequeued value
    pq.Dequeue(value);
    cout << value << endl;

    // Dequeue one element and print the dequeued value
    pq.Dequeue(value);
    cout << value << endl;

    /* You have N magical bags of candies in front of you. The i-th bag has Ai candies in it. It takes you one minute to
        finish a bag of candies, no matter how many candies in it. Every time you finish a bag with X candies in it, the
        bag is magically replenished with X/2 (rounded down to the nearest integer) more candies. Write a program
        that determines the maximum number of candies you can eat in K minutes.

        The input is a sequence of integers. The first integer N is the number of bags. The next integer K is the number
        of minutes you have. The next N integers is the number of candies in the bags. The output of your program is a
        single integer which represents the maximum number of candies you can eat.
    */

    int numberOfBags, minutes, total=0;
    cin >> numberOfBags >> minutes;

    PQType<int> magicalBags(numberOfBags);

    for(int i=0; i<numberOfBags; i++){
        cin >> value;
        magicalBags.Enqueue(value);
    }

    for(int i=0; i<minutes; i++){
        magicalBags.Dequeue(value);
        total += value;
        magicalBags.Enqueue(value/2);
    }

    cout << total << endl;

    return 0;
}
