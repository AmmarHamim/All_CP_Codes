#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

bool Possible(vector<ll>&v, long double d,ll len)
{
    ll n=v.size();
    if(v[0]>d)return false;
    if(len-v[n-1]>d) return false;

    for(int i=1;i<n;i++)
    {
        if(v[i]-v[i-1]>2*d)return false;
    }
    
    return true;
}
int main()
{
    fast_io;

    ll n,len;cin>>n>>len;

    vector<ll>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    sort(v.begin(),v.end());
    long double precision= 1e-10;
    long double l=0;
    long double h=len;
    long double ans=len;
    while((h-l)>precision)
    {
        long double mid=(l+h)/2.0;
        if(Possible(v,mid,len))
        {
            ans=mid;
            h=mid;
        }
        else l=mid;
    }
    // cout<<ans<<endl;
    cout<<fixed<<setprecision(10)<<ans<<endl;
    return 0;
}