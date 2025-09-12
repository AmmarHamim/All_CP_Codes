#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    ll t;
    cin>>t;
    while(t--)
    {
        ll n,a,b;cin>>n>>a>>b;
        if(n==0)
        {
            cout<<0<<endl;
            continue;
        }
        ll time=0;
        if(a<=b)
        {
            time=(n+a-1)/a;
        }
        else time= (n+b-1)/b;

        cout<<time<<endl;
    }
    return 0;
}