#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll t;
    cin>>t;
    while(t--)
    {
        ll l,r;
        cin>>l>>r;

        ll sum=0;
        ll val=l;
        ll ct=0;
        while(sum+val<=r)
        {
            ct++;
            sum+=ct;
        }
        cout<<ct<<endl;
    }
    return 0;
}