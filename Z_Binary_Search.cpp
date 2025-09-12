#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll n,q;
    cin>>n>>q;
    vector<ll>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    while(q--)
    {
        ll x;
        cin>>x;
        ll l=0,r=n-1;
        bool found=false;
        while(l<=r)
        {
            ll mid=(l+r)/2;
            if(v[mid]==x)
            {
                found=true;
                break;
            }
            else if(x<v[mid])
            {
                r=mid-1;
            }
            else 
            {
                l=mid+1;
            }
        }
        if(found)cout<<"found"<<endl;
        else cout<<"not found"<<endl;
    }

    return 0;
}