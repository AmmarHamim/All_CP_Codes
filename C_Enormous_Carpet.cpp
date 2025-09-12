#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

ll calc(ll base,ll power, ll MOD)
{
    if(power==0)return 1;
    ll half_power = calc(base,power/2,MOD);

    if(power%2==0) return half_power*half_power % MOD;
    else return (half_power*half_power) %MOD * base %MOD;

    }
int main()
{
    fast_io;

    ll tt=1;
    while(1)
    {
        ll n,k,a;cin>>n>>k>>a;
        if(n==0 && k==0 && a==0)break;

        ll c;cin>>c;
        vector<ll>v(c);
        for(int i=0;i<c;i++)
        {
            cin>>v[i];
        }

        cout<<"Case "<<tt++<<":"<<'\n';
        for(int i=0;i<c;i++)
        {
            ll mod=v[i];
            ll getPow = calc(k,n,mod);

            ll ans=(getPow*(a)%mod)%mod;
            // cout<<ans<<" ";
            if(i!=c-1)
            cout<<ans<<" ";
            else cout<<ans;
        }
        cout<<'\n';
    }
    return 0;
}