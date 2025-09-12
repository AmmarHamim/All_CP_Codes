#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;

        if(n<=k)
        {
            ll res = (k+n-1)/n;
            cout<<res<<endl;
        }
        else
        {
            ll f = (n+k-1)/k;
            k*=f;
            ll res = (k+n-1)/n;
            cout<<res<<endl;
        }
    }
    return 0;
}