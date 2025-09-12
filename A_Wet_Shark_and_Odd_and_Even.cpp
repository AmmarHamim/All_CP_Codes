#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll n;
    cin>>n;
    vector<ll>v(n);
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        sum+=v[i];
    }
    if(sum%2==0)cout<<sum<<endl;
    else
    {
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        ll s=sum-v[i];
        if(s%2==0) return cout<<s<<endl,0;
    }
    }
    return 0;
}