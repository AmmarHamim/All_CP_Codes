#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll n;
    cin>>n;
    vector<int>v(n);
    if(n<=1)
    {
        return cout<<0,0;
    }
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    ll maxp=v[0];
    ll minp=v[0];
    ll ct=0;
    for(int i=0;i<n-1;i++)
    {
        if(v[i+1]>maxp)
        {
            maxp=v[i+1];
            ct++;
        }
        if(v[i+1]<minp)
        {
            minp=v[i+1];
            ct++;
        }
    }
    cout<<ct<<endl;
    return 0;
}