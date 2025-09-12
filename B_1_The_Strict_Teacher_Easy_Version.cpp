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
        ll n,m,q;
        cin>>n>>m>>q;

        ll t1,t2;cin>>t1>>t2;
        ll david;cin>>david;

        ll ans=0;
        if(david<min(t1,t2))
        {
            ans=abs(1-min(t1,t2));
            cout<<ans<<endl;
        }
        else if(david>max(t1,t2))
        {
            ans=abs(n-max(t1,t2));
            cout<<ans<<endl;
        }
        else
        {
            cout<<abs((t2-t1))/2<<endl;
        }
    }
    return 0;
}