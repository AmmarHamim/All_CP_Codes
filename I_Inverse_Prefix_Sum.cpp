#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll n;
    cin>>n;
    vector<ll>v(n);
    vector<ll>t(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<n;i++)
    {
        if(i==0)t[i]=v[i];
        else t[i]=(v[i]-v[i-1]);
    }
    for(auto u:t)
    {
        cout<<u<<" ";
    }

    return 0;
}