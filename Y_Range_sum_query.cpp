#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll n,q;
    cin>>n>>q;
    vector<ll>v(n);
    vector<ll>pre(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    pre[0]=v[0];
    for(int i=1;i<n;i++)
    {
        pre[i]=v[i]+pre[i-1];
    }
    while(q--)
    {
        ll sum=0;
        ll l,r;
        cin>>l>>r;
        l--;
        r--;
        if(l==0)sum=pre[r];
        else sum=pre[r]-pre[l-1];
        cout<<sum<<endl;
    }
    return 0;
}