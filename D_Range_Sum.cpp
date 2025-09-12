#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll n;cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    reverse(v.begin(),v.end());
    vector<ll>presum(n+1,0);
     for(int i=1;i<=n;i++)
     {
         presum[i]=presum[i-1]+v[i-1];
     }

     ll q;cin>>q;
     while(q--)
     {
        ll op;
        cin>>op;
        if(op==1)
        {
            ll l,r;cin>>l>>r;
            l = v.size()-l+1;
            r = v.size()-r+1;
            if(l>r)swap(l,r);

            ll ans = presum[r]-presum[l-1];
            cout<<ans<<endl;
        }

        else 
        {
            ll d;
            cin>>d;
            v.push_back(d);

            presum.push_back(presum.back()+d);
        }
     }
    return 0;
}