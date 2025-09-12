#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

class Node {
    public:
        int data;
        Node* next;
    
        Node(int val) {
            data = val;
            next = nullptr;
        }
    };


Node* front = nullptr;
Node* rear = nullptr;

bool isEmpty() {
    return front == nullptr;
}


int main()
{
    fast_io;

    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();

    dequeue();
    dequeue();
    display();

    enqueue(40);
    enqueue(50);
    display();

    return 0;
}