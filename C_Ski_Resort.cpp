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
        ll n,k,q;
        cin>>n>>k>>q;
        vector<ll>v;
        for(int i=0;i<n;i++)
        {
            ll x;cin>>x;
            if(x<=q)v.push_back(1);
            else v.push_back(0);
        }

        ll len=0,ways=0;
        ll l=0,r=0;
        while(r<n)
        {
            if(v[r]==1)len++;
            else
            {
                if(len>=k)
                {
                    ll x = len-k+1;
                    ways+= (x*(x+1))/2;
                }
                len=0;
                // l=r;
            }
            r++;
        }
         if(len>=k)
         {
            ll x = len-k+1;
            ways+= (x*(x+1))/2;
         }
        cout<<ways<<endl;

    }
    return 0;
}