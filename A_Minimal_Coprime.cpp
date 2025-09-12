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
        ll l,r;cin>>l>>r;
        if(l==1  and r == 1)cout<<1<<endl;
        else cout<<r-l<<endl;
    }
    return 0;
}