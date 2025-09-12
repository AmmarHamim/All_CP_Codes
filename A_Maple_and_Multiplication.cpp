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
        ll a,b;cin>>a>>b;
        if(a==b)cout<<0<<endl;
        else if(a%b==0 || b%a==0)cout<<1<<endl;
        else cout<<2<<endl;
    }
    return 0;
}