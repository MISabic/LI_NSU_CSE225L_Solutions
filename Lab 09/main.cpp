#include <iostream>
#include <algorithm>
#include "quetype.h"
#include "quetype.cpp"

using namespace std;

int main()
{
    QueType<int> total, numOfCoins;

    // Taking Input
    int n;
    cin >> n;

    int coinValue[n+5];

    for(int i=0; i<n; i++){
        cin >> coinValue[i];
    }

    int amountOfMoneyToMake;
    cin >> amountOfMoneyToMake;

    sort(coinValue, coinValue + n);

    // Minimum number of coins to make the given amount of money
    int value = 0, coins = 0;

    while(value != amountOfMoneyToMake){

        for(int i=0; i<n; i++){
            total.Enqueue(value + coinValue[i]);
            numOfCoins.Enqueue(coins + 1);
        }

        total.Dequeue(value);
        numOfCoins.Dequeue(coins);

    }
    cout << coins << endl;

    return 0;
}
