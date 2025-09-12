#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll t;
    cin>>t;
    while(t--)
    {
    ll n;
    cin>>n;
    ll sum=0;
    ll ans=INT16_MAX;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        sum+=v[i];
    }
    if(sum%2==0)
    {
        cout<<0<<endl;
        continue;
    }
    else
    {
        for(int i=0;i<n;i++)
        {

            int j=v[i];
            ll ct=0;
            while(v[i]%2==j%2)
            {
                j/=2;
                ct++;

            }
            ans=min(ans,ct);
        }
        cout<<ans<<endl;
    }
    }
    return 0;
}