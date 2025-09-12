#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll n,t;
    cin>>n>>t;

    vector<ll>c(n);
    vector<ll>r(n);
    for(ll i=0;i<n;i++)
    {
        cin>>c[i];
    }
    for(ll i=0;i<n;i++)
    {
        cin>>r[i];
    }

    ll winner=-1;
    ll mx=-1;
    for(ll i=0;i<n;i++)
    {
        if(t==c[i])
        {
            if(r[i]>mx)
            {
                mx=r[i];
                winner=i;
            }
        }
    }

    if(winner==-1)
    {
        ll pc=c[0];
        for(ll i=0;i<n;i++)
        {
            if(c[i]==pc)
            {
            if(r[i]>mx)
            {
                mx=r[i];
                winner=i;
            }
            }
        }
    }
    cout<<winner+1<<endl;
    return 0;
}