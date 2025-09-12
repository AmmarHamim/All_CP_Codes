#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll n;
    cin>>n;
    map<string,int>mp;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        mp[s]++;
    }
    ll m=0;
    string ans;
    for(auto u:mp)
    {
        if(u.second>m)
        {
            m=u.second;
            ans=u.first;
        }
    }
    cout<<ans<<endl;
    return 0;
}