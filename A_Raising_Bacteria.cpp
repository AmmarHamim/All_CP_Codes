#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll x;
    cin>>x;
    ll ans=0;
    while(x>0)
    {
        if(x%2==1)ans++;

        x/=2;
    }
    cout<<ans<<endl;
    return 0;
}