#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll n,m,a,b;
    while(cin>>n>>m>>a>>b)
    {
        if(m*a<=b)cout<<n*a<<endl;
        else
        {
            int ans = (n/m)*b + min((n%m)*a,b);
            cout<<ans<<endl;
        }
    }
    return 0;
}