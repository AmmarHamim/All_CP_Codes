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
        ll a,b;
        cin>>a>>b;
        ll sub=abs(a-b);
        if(sub==0)cout<<0<<endl;
        else
        {
        ll ans = (sub+9)/10;
        cout<<ans<<endl;
        }
    }
    return 0;
}