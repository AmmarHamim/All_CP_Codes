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
        int n,q;
        cin>>n>>q;
        vector<ll>v(n+1);
        ll sum=0;
        for(ll i=1;i<=n;i++)
        {
            cin>>v[i];
            sum+=v[i];
        }

        vector<ll>presum(n+1,0);
        for(int i=1;i<=n;i++)
        {
            presum[i]=presum[i-1]+v[i];
        }
        while(q--)
        {
            ll l,r,k;
            cin>>l>>r>>k;

            ll sumseg=presum[r]-presum[l-1];

            ll newsum=presum[n]-sumseg+(r-l+1)*k;

            if(newsum%2==1)yes;
            else no;
        }
    }
    return 0;
}