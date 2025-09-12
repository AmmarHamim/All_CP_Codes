#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll n,a,b;
    while(cin>>n>>a>>b)
    {
        ll ans=min(n-a,b+1);
        cout<<ans<<endl;
    }
    return 0;
}