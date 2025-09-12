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
        ll n,k;cin>>n>>k;
        ll l = max(1ll,n-k+1);
        ll r = n;
        ll ct= (r+1)/2 - l/2;
        if(ct%2==1)no;
        else yes;
    }
    return 0;
}