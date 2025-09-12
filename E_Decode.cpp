#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    int t;
    cin>>t;
    ll mod=1000000007;
    while(t--)
    {
        string s;
        cin>>s;
        ll n=s.size();
        map<ll,ll>mp;
        mp[0]=1;
        ll curr=0;
        ll ans=0;
        for(ll i=0;i<n;i++)
        {
            curr+=(s[i]=='1' ? 1 : -1);
            ans+=(mp[curr]*(n-i))%mod;
            ans%=mod;
            mp[curr]+=(i+2);
        }
        cout<<ans<<endl;
    }
    return 0;
}