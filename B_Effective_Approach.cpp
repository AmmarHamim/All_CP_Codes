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
    map<int,int>pos;
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
        pos[v[i]]=i+1;
    }
    ll m;
    cin>>m;
    vector<ll>q(m);
    for(ll i=0;i<m;i++)cin>>q[i];

    ll vasya=0,petya=0;
    for(ll i=0;i<m;i++)
    {
        ll p=pos[q[i]];
        vasya+=p;
        petya+=n-p+1;
    }
    cout<<vasya<<" "<<petya<<endl;
    return 0;
}