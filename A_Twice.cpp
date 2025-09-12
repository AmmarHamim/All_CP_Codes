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
        map<int,int>mp;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            mp[v[i]]++;
        }

        int ct=0;
        for(auto u:mp)
        {
            // cout<<u.second<<endl;

            ct+= u.second/2;
        }
        cout<<ct<<endl;
         
    }
    return 0;
}