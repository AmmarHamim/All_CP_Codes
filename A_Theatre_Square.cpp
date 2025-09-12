#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll n,m,a;
    cin>>n>>m>>a;

    ll ans=ceil((double)n/a)*ceil((double)m/a);
    cout<<ans<<endl;
    return 0;
}