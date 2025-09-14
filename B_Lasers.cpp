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
        ll n,m,x,y;cin>>n>>m>>x>>y;
        vector<int>v1(n),v2(m);
        for(int i=0;i<n;i++)
        {
            cin>>v1[i];
        }
        for(int i=0;i<m;i++)
        {
            cin>>v2[i];
        }

        int ct=0;
        for(int i=0;i<n;i++)
        {
            if(y>=v1[i])ct+=1;
        }
        for(int i=0;i<m;i++)
        {
            if(x>=v2[i])ct+=1;
        }
        cout<<ct<<endl;
    }
    return 0;
}