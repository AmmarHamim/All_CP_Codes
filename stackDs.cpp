#include <iostream>
using namespace std;

#define MAX 10

class Stack 
{
private:
    int items[MAX];
    int top;
    int size;

public:
    Stack() 
    {
        top=-1;
        size=0;
    }

    bool isFull() 
    {
        return top==MAX-1;
    }

    bool isEmpty() 
    {
        return top==-1;
    }

    void push(int newItem) {
        if (isFull()) {
            cout<<"STACK FULL"<<endl;
            return;
        }
        top++;
        items[top]=newItem;
        size++;
    }

    void pop() {
        if (isEmpty()) {
            cout << "\nkichu naiiiii\n";
            return;
        }
        cout<<"Item popped= "<<items[top]<<endl;
        top--;
        size--;
    }

    void printStack() {
        cout << "Stack: ";
        for (int i = 0; i <= top; i++) {
            cout << items[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    s.printStack();

    s.pop();

    cout << "\nAfter popping out\n";
    s.printStack();

    return 0;
}
