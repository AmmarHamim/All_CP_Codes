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

    
    public:
    Node(int val)
    {
        data = val;
        next = nullptr;
    }
    Node(int val, Node* ptr)
    {
        data=val;
        next=ptr;
    }

};
void PrintLL(Node* head)
{
    if(!head)return;
    Node* temp = head;
    cout<<temp->data<<" ";
    temp=temp->next;
    while(temp!=head)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

Node* insertAtPos(int val,int pos,Node* head)
{
    Node* newNode = new Node(val);
    if(head==nullptr)
    {
        if(pos==1)
        {
            newNode->next=newNode;
            return newNode;
        }
        else
        {
            cout<<"Invalid Position"<<endl;
            return head;
        }
    }

    if(pos==1)
    {
        Node* temp=head;
        while(temp->next!=head)
        {
            temp=temp->next;
        }
        temp->next=newNode;
        newNode->next=head;
        return newNode;
    }

    Node* temp = head;
    int ct=0;
    while(temp->next!=head)
    {
        ct++;
        if(ct==pos-1)
        {
            newNode->next=temp->next;
            temp->next=newNode;
            break;
        }
        temp=temp->next;
    }
    return head;
}

Node* insertAtFront(int val, Node* head)
{
    Node* newNode = new Node(val);

    if(head==nullptr)
    {
        newNode->next=newNode;
        return newNode;
    }

    Node* temp=head;
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->next=head;

    return newNode;
}

Node* insertAtEnd(int val,Node* head)
{
    Node* newNode=new Node(val);

    if(head==nullptr)
    {
        newNode->next=newNode;
        return newNode;
    }
    Node* temp=head;
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->next=head;
    return head;
}

int main()
{
    fast_io;

    Node* first = new Node(4);
    Node* second = new Node(8);
    Node* third = new Node(1);
    Node* fourth = new Node(99);


    first->next = second;
    second->next = third;
    third->next= fourth;
    fourth->next=first;
    Node* head=first;
    cout<<"without inserting anything:"<<endl;
    PrintLL(head);
    cout<<endl;

    cout<<"Inserting at front"<<endl;
    head = insertAtFront(100,head);
    PrintLL(head);
    cout<<endl;
    

    cout<<"Inserting at the end:"<<endl;
    head=insertAtEnd(200,head);
    PrintLL(head);
    cout<<endl;


    cout<<"Inserting at position 3: ";
    head=insertAtPos(555,3,head);
    PrintLL(head);
    cout<<endl;

    return 0;
}