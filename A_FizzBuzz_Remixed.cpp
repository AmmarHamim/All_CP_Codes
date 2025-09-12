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
        ll n;cin>>n;
        ll ans = (n/15)*3;
        ll rem = n%15;
        if(rem>=2)
        ans+=3;
        else if(rem==1)ans+=2;
        else if(rem==0)ans+=1;
        cout<<ans<<endl;
    }
    return 0;
}