#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll n;
    cin>>n;
    vector<int>v(n),d;
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        sum+=v[i];
    }
    ll turn = sum%(n+1);
    ll ct=0;
    for(int i=1;i<=5;i++)
    {
        turn++;
        if(turn>n+1)turn=1;

        if(turn!=1)ct++;
    }
    cout<<ct<<endl;
    return 0;
}