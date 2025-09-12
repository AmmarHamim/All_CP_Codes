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
        ll n;cin>>n;
        if(n%2==1)
        {
            cout<<0<<endl;
            continue;
        }

        vector<int>div;
        for(int i=1;i*i<=n;i++)
        {
            if(n%i==0)
            {
                div.push_back(i);
                if(i!=n/i)
                div.push_back(n/i);
            }
        }

        ll ct=0;
        for(auto u:div)
        {
            if(u%2==0)ct++;
        }
        cout<<ct<<endl;

    }
    return 0;
}