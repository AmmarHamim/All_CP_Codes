#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll n,m;
    cin>>n>>m;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    ll earn=0;
    ll ct=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]<=0)
        {
            earn+= abs(v[i]);
            ct++;
        }
        if(ct==m)break;
    }
    cout<<earn<<endl;
    return 0;
}