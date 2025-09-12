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
        ll n,k;cin>>n>>k;
        string s;cin>>s;
        vector<ll>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }

        if(k==n)
        {
            cout<<0<<endl;
            continue;
        }

        ll l=0,r=0;
        ll b=0;
        while(l<=r)
        {
            if(v[r]=='B')b++;
            
        }


    }
    return 0;
}