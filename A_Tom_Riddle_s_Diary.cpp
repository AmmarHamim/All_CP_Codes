#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll t;
    cin>>t;
    map<string,bool>mp;
    while(t--)
    {
        string s;
        cin>>s;
        if(mp[s]==1)cout<<"YES\n";
        else cout<<"NO\n";
        mp[s]=1;

    }
    return 0;
}