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
        ll x;
        cin>>x;
        
        while(x%2==0)
        {
            x/=2;
        }
        if(x==1)no;//means x is a power of 2(2^a=x)
        else yes;
    }
    return 0;
}