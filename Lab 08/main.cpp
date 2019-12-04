#include <iostream>
#include "stacktype.h"
#include "stacktype.cpp"

using namespace std;

bool isOp(char ch)
{
    if(ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '(' || ch == ')')
        return true;
    else
        return false;
}

int number(string str)
{
    int res = 0;
    for(int i=0; i<str.length(); i++){
        res = (res* 10) + (str[i] - '0');
    }
    return res;
}

int precedence(char ch)
{
    if(ch == '+') return 1;
    else if(ch == '-') return 2;
    else if(ch == '*') return 3;
    else if(ch == '/') return 4;
}

int main()
{
    string expression;
    string num = "";
    string postfix_notation = "";

    getline(cin, expression);

    StackType<char>st;

    // Postfix notation
    for(int i=0; i<expression.length(); i++){

        if(expression[i] == ' ') continue;

        if(isdigit(expression[i])){
            postfix_notation += expression[i];
        }

        else{
            if(expression[i] == '(' || expression[i] == ')'){

                if(expression[i] == '('){
                    st.Push(expression[i]);
                }
                else{
                    while(!st.IsEmpty() && st.Top() != '('){
                        postfix_notation = postfix_notation + " " + st.Top();//cout<<"ghfvyhj "<<st.top()<<endl;
                        st.Pop();
                    }
                    if(st.IsEmpty()){
                        cout << "Invalid expression" << endl;
                        return 0;
                    }
                    st.Pop();
                }
                continue;
            }

            while(!st.IsEmpty() && st.Top() != '(' && precedence(st.Top()) > precedence(expression[i])){
                postfix_notation = postfix_notation + " " + st.Top();

                st.Pop();
            }
            postfix_notation += " ";
            st.Push(expression[i]);
        }

    }
    while(!st.IsEmpty()){
        if(st.Top() == '('){
            cout << "Invalid expression" << endl;
            return 0;
        }
        postfix_notation = postfix_notation + " " + st.Top();
        st.Pop();
    }
    cout<<postfix_notation<<endl;

    // Calculating result
    StackType<double> result;
    string value = "";

    for(int i=0; i<postfix_notation.length(); i++){

        if(!isdigit(postfix_notation[i]) && postfix_notation[i] != ' '){

            double secondValue = result.Top();
            result.Pop();

            if(result.IsEmpty()){
                cout << "Invalid expression" << endl;
                return 0;
            }
            double firstValue = result.Top();
            result.Pop();

            if(postfix_notation[i] == '+') result.Push(firstValue + secondValue);
            else if(postfix_notation[i] == '-') result.Push(firstValue - secondValue);
            else if(postfix_notation[i] == '*') result.Push(firstValue * secondValue);
            else if(postfix_notation[i] == '/') result.Push(firstValue / secondValue);

            cout<<firstValue<<" "<<secondValue<<" "<<postfix_notation[i]<<endl;

            ++i;
        }
        else if(isdigit(postfix_notation[i])){

            value += postfix_notation[i];
        }
        else if(postfix_notation[i] == ' '){
            if(value != "")
                result.Push(atof(value.c_str()));
            value = "";
        }
    }
    cout << result.Top() << endl;

    return 0;
}

