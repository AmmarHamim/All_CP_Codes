#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        ll n,r;
        cin>>n>>r;
        vector<pair<int,int>>v(r);

        
        map<pair<int,int>,int>mp;
        for(int i=0;i<r;i++)
        {
            cin>>v[i].first>>v[i].second;
            mp[v[i]]++;
        }
        for(auto u:mp)
        {
            cout<<u.first.first<<" "<<u.first.second<<" "<<u.second<<endl;
        }

    }
    return 0;
}