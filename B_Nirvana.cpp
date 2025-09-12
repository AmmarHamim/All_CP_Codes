#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int findMax(int k)
{
    int res=1;
    while(k!=0)
    {
        res*=k%10;
        k/=10;
    }
    return res;
}
int main()
{
    fast_io;

    ll n;cin>>n;

    int p=1;
    n++;
    int ans=1;
    while(n!=0)
    {
        ans=max(ans,findMax(n*p-1));
        p*=10;
        n/=10;
    }

    cout<<ans<<endl;
    return 0;
}