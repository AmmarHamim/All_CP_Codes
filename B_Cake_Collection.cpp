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
    while(t--)
    {
        ll n,m;cin>>n>>m;
        vector<ll>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }

        sort(v.rbegin(),v.rend());
        ll ans=m*v[0];

        ll lb=min(n,m);
        for(int i=1;i<lb;i++)
        {
            ans+= v[i]*(m-i);
        }
        cout<<ans<<endl;
    }
    return 0;
}