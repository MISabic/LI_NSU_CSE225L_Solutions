#include <iostream>
#include <cmath>

using namespace std;

int fib(int n)
{
    if(n==1 || n==2) return 1;
    return fib(n-1)+fib(n-2);
}

int factorial(int n)
{
    if(n==0) return 1;
    return n*factorial(n-1);
}

int sumOfDigits(int x)
{
    if(x==0) return 0;
    return (x%10) + sumOfDigits(x/10);
}

int findMin(int a[], int size)
{
    if(size==1) return a[0];
    return min(a[size-1], findMin(a, size-1));
}

int DecToBin(int dec)
{
    if(dec==1) return 1;
    return (dec%2) + 10*DecToBin(dec/2);
}

/**
     1     1     1           1
    --- + --- + --- + ... + ---
    2^0   2^1   2^2         2^n
*/

double series(int n)
{
    if(n==0) return 1; // 2^0 = 1
    return 1.0/pow(2,n) + series(n-1);
}

int main()
{
    int n;
    cin>>n;

    cout << "Fibonacci Number : " << fib(n) << endl;
    cout << "Factorial : " << factorial(n) << endl;
    cout << "Sum of Digits : " << sumOfDigits(n) << endl;

    int A[] = {4,-1,5,0,3};
    cout << "Minimum of Array : " << findMin(A, 5) << endl;
    cout << "Binary of " << n << " : " << DecToBin(n) << endl;
    cout << "Result of the series : " << series(n) << endl;

    return 0;
}
