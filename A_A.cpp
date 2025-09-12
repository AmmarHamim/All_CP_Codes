#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll x,y;cin>>x>>y;

    ll temp= y-x;
    ll ans= temp/2+x;
    cout<<ans<<endl;
    return 0;
}