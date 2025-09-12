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
        int n;
        cin>>n;
        vector<ll>v(n);
        vector<ll>presum(n+1,0);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }

        for(int i=1;i<=n;i++)
        {
            presum[i]+= presum[i-1]+v[i-1];
        }

        ll maxele=-1;
        int ct=0;
        for(int i=1;i<=n;i++)
        {
            maxele=max(maxele,v[i-1]);
            if(presum[i]==2*maxele)ct++;
        }
        cout<<ct<<endl;
    }
    return 0;
}