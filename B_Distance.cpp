#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll n,d;cin>>n>>d;

    d=d*d;

    vector<pair<ll,ll>>v(n);

    for(int i=0;i<n;i++)
    {
        cin>>v[i].first>>v[i].second;
    }
    ll ct=0;
    for(int i=0;i<n;i++)
    {
        ll tar= (v[i].first*v[i].first + v[i].second*v[i].second);
        if(tar<=d)ct++;
    }
    cout<<ct<<endl;
    return 0;
}