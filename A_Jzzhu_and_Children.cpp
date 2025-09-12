#include<bits/stdc++.h>
#include<math.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll n,m;
    cin>>n>>m;
    vector<ll>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
        ll ans=0;
        ll op=0;
        for(int i=0;i<n;i++)
        {
            ll round = ceil((double)v[i]/m);
            if(round>=op)
            {
                op= round;
                ans=i;
            }
        }
        cout<<ans+1<<endl;
    
    return 0;
}