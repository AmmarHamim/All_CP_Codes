#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll t;cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        vector<vector<ll>>arr(n,vector<ll>(m));
        for (int i=0;i<n;i++)
        {
            for (int j=0;j<m;j++)
            {
                cin>>arr[i][j];
            }
        }

        unordered_set<ll>clr;
        for (int i=0;i<n;i++)
        {
            for (int j=0;j<m;j++)
            {
                clr.insert(arr[i][j]);
            }
        }

        unordered_map<ll,bool>mpp;
        for (auto u:clr)
        {
            mpp[u]=0;
        }

        for (int i=0;i<n;i++)
        {
            for (int j=0;j<m;j++)
            {
                ll curr=arr[i][j];

                if (j<m-1 && arr[i][j]==arr[i][j + 1])
                {
                    mpp[curr]=1;
                }

                if (i<n-1 && arr[i][j] == arr[i + 1][j])
                {
                    mpp[curr]=1;
                }
            }
        }

        ll sum = 0, mx = 0;
        for (auto u:clr)
        {
            ll st = mpp[u] ? 2:1;
            sum += st;
            mx = max(mx,st);
        }

        ll ans = min(sum,sum-mx);
        cout<<ans<<endl;
    }
    return 0;
}