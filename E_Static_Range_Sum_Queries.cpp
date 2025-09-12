#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll n,q;
    cin>>n>>q;

    vector<ll>v(n+1);
    vector<ll>presum(n+1,0);
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];

        presum[i]=presum[i-1]+v[i];
    }

    while(q--)
    {
        ll l,r;
        cin>>l>>r;
        ll ans = presum[r]-presum[l-1];
        cout<<ans<<endl;
    }
    return 0;
}