#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>v(n);
        vector<ll>t(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        vector<ll>v2(v.begin(),v.end());
        sort(v.rbegin(),v.rend());
        ll maxi=v[0];
        for(int i=0;i<n;i++)
        {
            if(v2[i]==maxi)t[i]=maxi-v[1];
            else
            {
                t[i]=v2[i]-maxi;
            }
        }
        for(auto u:t)
        cout<<u<<" ";
        cout<<endl;
    }
    return 0;
}