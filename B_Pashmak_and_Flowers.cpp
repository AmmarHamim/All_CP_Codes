#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll n;
    cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int maxd=abs(v[0]-v[n-1]);
    // int ct=0;
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=i;j<n;j++)
    //     {
    //         if((v[j]-v[i])==maxd)ct++;
    //     }
    // }
    if(v[0]==v[n-1])
    return cout<< maxd<<" "<<((n-1)*n)/2<<endl,0;
    else 
    {
    ll v0=1;
    ll vn=1;
    for(int i=1;i<n-1;i++)
    {
       if(v[0]==v[i])v0++;
       if(v[n-1]==v[i])vn++;
    }
    cout<<maxd<<" "<<(v0*vn)<<endl;
    }
    return 0;
}