#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

const int Size=5;
int que[Size];
int start=-1,rear=-1;

bool isEmpty(){
    return start==-1;
}
bool isFull(){
    return ((rear+1)%Size)==start;
}

void enqueue(int val){
    if(isFull())
    {
        cout<<"Dont Push! It hurts!"<<endl;
        return;
    }
    if(isEmpty())
    {
        start=0,rear=0;
    }
    else 
    {
        rear=(rear+1)%Size;
    }
    que[rear]=val;
}

void dequeue()
{
    if(isEmpty())
    {
        cout<<" amar vitore kisu nai!! sad for u"<<endl;
        return;
    }
    int element=que[start];
    if(start==rear)
    {
        start=-1,rear=-1;
    }
    else 
    {
        start=(start+1)%Size;
    }

}

void display()
{
    if(isEmpty())
    {
        cout<<"Khaliiiiii"<<endl;
        return;
    }
    int i=start;
    while(1)
    {
        cout<<que[i]<<' ';
        if(i==rear)break;
        i= (i+1)%Size;
    }
}
int main()
{
    fast_io;

    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(90);
    enqueue(50);
    display();

    cout<<endl;
    dequeue();
    dequeue();
    enqueue(60);
    enqueue(70);
    display();


    return 0;
}