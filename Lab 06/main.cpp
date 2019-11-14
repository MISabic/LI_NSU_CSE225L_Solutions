#include <iostream>
#include "stacktype.h"
#include "stacktype.cpp"

using namespace std;

void PrintVal(StackType<int> st)
{
    StackType<int> stNew;

    while(!st.IsEmpty()){
        stNew.Push(st.Top());
        st.Pop();
    }

    while(!stNew.IsEmpty()){
        cout << stNew.Top() << ' ';
        st.Push(stNew.Top());
        stNew.Pop();
    }
    cout << endl;
}

void checkBalancedOrNot(string str)
{
    StackType<char> balancedString;

    for(int i=0; i<str.length(); i++){
        if(balancedString.IsEmpty()){
            balancedString.Push(str[0]);
        }
        else{
            if(balancedString.Top() == '(' && str[i] == ')'){
                balancedString.Pop();
            }
            else{
                balancedString.Push(str[i]);
            }
        }
    }

    if(balancedString.IsEmpty())
        cout << "Balanced" << endl;
    else
        cout << "Not Balanced" << endl;
}

int main()
{
    // Create a stack of integers
    StackType<int> st;

    // Check if the stack is empty
    if(st.IsEmpty())
        cout << "Stack is Empty" << endl;
    else
        cout << "Stack is not Empty" << endl;

    // Push four items
    for(int i=0; i<4; i++) {
        int n;
        cin >> n;
        if(!st.IsFull())
            st.Push(n);
        else
            cout << "Stack is full" << endl;
    }

    // Check if the stack is empty
    if(st.IsEmpty())
        cout << "Stack is Empty" << endl;
    else
        cout << "Stack is not Empty" << endl;

    // Check if the stack is full
    if(st.IsFull())
        cout << "Stack is full" << endl;
    else
        cout << "Stack is not full" << endl;

    // Print the values in the stack (in the order the values are given as input)
    PrintVal(st);

    // Push another item
    int n;
    cin >> n;
    if(!st.IsFull())
        st.Push(n);
    else
        cout << "Stack is full" << endl;

    // Print the values in the stack
    PrintVal(st);

    // Check if the stack is full
    if(st.IsFull())
        cout << "Stack is full" << endl;
    else
        cout << "Stack is not full" << endl;

    // Pop two items
    if(st.IsEmpty())
        cout << "Stack is Empty" << endl;
    else
        st.Pop();

    if(st.IsEmpty())
        cout << "Stack is Empty" << endl;
    else
        st.Pop();

    // Print top item
    cout << st.Top() << endl;

    // Take strings of parentheses from the user as input and use a stack to check if the string of parentheses is balanced or not
    checkBalancedOrNot("()");
    checkBalancedOrNot("(())()(()())()");
    checkBalancedOrNot("(())()((()");
    checkBalancedOrNot("(())))((()");

    return 0;
}







