#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data=val;
        next=nullptr;
    }
};

class LL{
    private :
    Node* head;

    public:
    LL(){
        head=nullptr;
    }

    //at begining
    void begining(int val)
    {
        Node* newNode = new Node(val);
        newNode ->next=head;
        head=newNode;
    }

     // Insert at the end
     void insertAtEnd(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void insertAtPosition(int val, int pos) {
        if (pos == 0) {  
            begining(val);
            return;
        }

        Node* newNode = new Node(val);
        Node* temp = head;
        for (int i = 0; temp != nullptr && i < pos - 1; i++) {
            temp = temp->next;
        }

        if (temp == nullptr) { 
            cout << "Position out of bounds!" << endl;
            return;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }


    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};




int main()
{
    fast_io;

    LL list;
    list.begining(5);
    list.insertAtEnd(29);
    list.insertAtPosition(15,2);
    list.insertAtEnd(44);
    list.display();
    return 0;
}