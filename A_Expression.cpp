#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll a,b,c;
    ll ans=0;
    while(cin>>a>>b>>c)
    {
        ans=a+b+c;
        ans=max(ans,a+(b*c));
        ans=max(ans,a*(b+c));
        ans=max(ans,(a+b)*c);
        ans=max(ans,a*b*c);
        
        cout<<ans<<endl;
    }
    return 0;
}