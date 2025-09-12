#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll m;
    cin>>m;
    vector<int>b(m);
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    ll mratio=0;
    ll ct=0;
    for(int i=0;i<m;i++)
    {
        ll r=0;
        for(int j=0;j<n;j++)
        {
            if(b[i]%a[j]==0)
            {
                r=b[i]/a[j];
                if(r>mratio)
                {
                    mratio=r;
                    ct=1;
                }
                else if(r==mratio)ct++;
            }
            else continue;
        }
    }
    cout<<ct<<endl;
    return 0;
}