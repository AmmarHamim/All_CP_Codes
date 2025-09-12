#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
int main()
{
    fast_io;

    ll t;
    cin >> t;
    for (ll i = 1; i <= t; i++)
    {
        ll n, m;
        cin >> n >> m;

        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        while (m--)
        {
            char op;cin>>op;
            if(op=='S')
            {
                ll d;
                cin>>d;
                for(int i=0;i<n;i++)
                {
                    v[i]+=d;
                }
            }
            else if(op=='M')
            {
                ll d;cin>>d;
                for(int i=0;i<n;i++)
                {
                    v[i]*=d;
                }
            }
            else if(op=='D')
            {
                ll k;cin>>k;
                for(int i=0;i<n;i++)
                {
                    v[i]/=k;
                }
            }
            else if(op=='P')
            {
                ll y,z;cin>>y>>z;
                swap(v[y],v[z]);
            }
            else if(op=='R')
            {
                reverse(v.begin(),v.end());
            }
        }
         
         cout<<"Case "<<i<<":"<<"\n";

         for(int i=0;i<n;i++)
         {
             cout<<v[i];
             if(i!=n-1)cout<<" ";
             else cout<<'\n';
         }
    }
    return 0;
}