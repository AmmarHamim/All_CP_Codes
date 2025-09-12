#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll t;
    cin>>t;
    while(t--)
    {
        ll n,q;
        cin>>n>>q;
        ll maxele=-1;
        vector<ll>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            maxele=max(maxele,v[i]);
        }

        vector<ll>eles;
        while(q--)
        {
            char ch;
            ll l,r;
            cin>>ch>>l>>r;


            if(l<=maxele&&r>=maxele)
            {
                if(ch=='+')
                {
                    maxele++;
                }
                else if(ch=='-')
                {
                    maxele--;
                }
                // cout<<maxele<<" ";
            }
            // cout<<maxele<<" ";
            eles.push_back(maxele);
        }
        for(auto u:eles)
        {
            cout<<u<<" ";
        }
        cout<<endl;

    }
    return 0;
}