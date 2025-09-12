#include <iostream>
#include <cstring>
using namespace std;

#define MAX 100

class Stack {
    char arr[MAX];
    int top;

public:
    Stack() 
    { 
        top=-1; 
    }

    bool isEmpty() 
    { 
        return top==-1; 
    }

    bool isFull() 
    {
         return top==MAX-1; 
    }

    void push(char ch)
    {
        if (isFull()) 
        {
            cout<<"Stack Overflow\n";
            return;
        }
        arr[++top] = ch;
    }
    char pop() 
    {
        if (isEmpty()) 
        {
            cout<<"Stack Underflow\n";
            return '\0';
        }
        return arr[top--];
    }

    char peek() 
    {
        if (isEmpty()) return '\0';
        return arr[top];
    }
};

int precedence(char op) 
{
    if (op == '^')return 3;
    if (op == '*' || op == '/') return 2;
    if (op == '+' || op == '-') return 1;
    return 0;
}

bool isOperator(char ch) 
{
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^');
}
string infixToPostfix(string infix) 
{
    Stack st;
    string postfix = "";

    for (int i=0;i<infix.length();i++) 
    {
        char ch=infix[i];

        if (isalnum(ch)) {
            postfix+=ch;
        }
        else if (ch == '(') {
            st.push(ch);
        }
        
        else if (ch==')') {
            while (!st.isEmpty() && st.peek() != '(') {
                postfix += st.pop();
            }
            st.pop();
        }
        else if (isOperator(ch)) 
        {
            while (!st.isEmpty() && precedence(st.peek()) >= precedence(ch)) 
            {
                postfix+=st.pop();
            }
            st.push(ch);
        }
    }

    while(!st.isEmpty()) 
    {
        postfix+=st.pop();
    }

    return postfix;
}

int main() {
    string infix;
    cout<<"Enter an infix expression: ";
    cin>>infix;

    string postfix=infixToPostfix(infix);
    cout<<"Postfix expression: "<<postfix<<endl;

    return 0;
}
