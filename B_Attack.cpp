#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll a,b;
    cin>>a>>b;
    ll ans=(a+b-1)/b;
    cout<<ans<<endl;
    return 0;
}