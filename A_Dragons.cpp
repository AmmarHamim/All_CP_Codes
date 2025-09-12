#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll n,s;
    cin>>s>>n;
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(),v.end());
    ll points=s;
    bool can=true;
    for(auto u:v)
    {
        if(points>u.first)points+=u.second;
        else
        {
            can=false;
            break;
        }
    }
    if(can)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    return 0;
}